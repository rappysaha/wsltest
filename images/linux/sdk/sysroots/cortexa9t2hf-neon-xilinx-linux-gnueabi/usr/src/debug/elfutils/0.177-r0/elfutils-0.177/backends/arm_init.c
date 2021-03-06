/* Initialization of Arm specific backend library.
   Copyright (C) 2002, 2005, 2009, 2013, 2014, 2015, 2017 Red Hat, Inc.
   This file is part of elfutils.
   Written by Ulrich Drepper <drepper@redhat.com>, 2002.

   This file is free software; you can redistribute it and/or modify
   it under the terms of either

     * the GNU Lesser General Public License as published by the Free
       Software Foundation; either version 3 of the License, or (at
       your option) any later version

   or

     * the GNU General Public License as published by the Free
       Software Foundation; either version 2 of the License, or (at
       your option) any later version

   or both in parallel, as here.

   elfutils is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received copies of the GNU General Public License and
   the GNU Lesser General Public License along with this program.  If
   not, see <http://www.gnu.org/licenses/>.  */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#define BACKEND		arm_
#define RELOC_PREFIX	R_ARM_
#include "libebl_CPU.h"

#include "libebl_arm.h"

/* This defines the common reloc hooks based on arm_reloc.def.  */
#include "common-reloc.c"


const char *
arm_init (Elf *elf,
	  GElf_Half machine __attribute__ ((unused)),
	  Ebl *eh,
	  size_t ehlen)
{
  int soft_float = 0;

  /* Check whether the Elf_BH object has a sufficent size.  */
  if (ehlen < sizeof (Ebl))
    return NULL;

  if (elf) {
    GElf_Ehdr ehdr_mem;
    GElf_Ehdr *ehdr = gelf_getehdr (elf, &ehdr_mem);
    if (ehdr && (ehdr->e_flags & EF_ARM_SOFT_FLOAT))
      soft_float = 1;
  }

  /* We handle it.  */
  arm_init_reloc (eh);
  HOOK (eh, segment_type_name);
  HOOK (eh, section_type_name);
  HOOK (eh, machine_flag_check);
  HOOK (eh, reloc_simple_type);
  HOOK (eh, register_info);
  HOOK (eh, core_note);
  HOOK (eh, auxv_info);
  HOOK (eh, check_object_attribute);
  if (soft_float)
    eh->return_value_location = arm_return_value_location_soft;
  else
    eh->return_value_location = arm_return_value_location_hard;
  HOOK (eh, abi_cfi);
  HOOK (eh, check_reloc_target_type);
  HOOK (eh, symbol_type_name);
  HOOK (eh, data_marker_symbol);

  /* We only unwind the core integer registers.  */
  eh->frame_nregs = 16;
  HOOK (eh, set_initial_registers_tid);

  /* Bit zero encodes whether an function address is THUMB or ARM. */
  eh->func_addr_mask = ~(GElf_Addr)1;

  return MODVERSION;
}
