/* -*- buffer-read-only: t -*-
   Generated automatically by parsecpu.awk from arm-cpus.in.
   Do not edit.

   Copyright (C) 2011-2019 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 3,
   or (at your option) any later version.

   GCC is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public
   License along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

static const cpu_alias cpu_aliastab_strongarm[] = {
  { "strongarm110", true},
  { "strongarm1100", false},
  { "strongarm1110", false},
  { NULL, false}
};

static const cpu_alias cpu_aliastab_arm7tdmi[] = {
  { "arm7tdmi-s", true},
  { NULL, false}
};

static const cpu_alias cpu_aliastab_arm710t[] = {
  { "arm720t", true},
  { "arm740t", true},
  { NULL, false}
};

static const cpu_alias cpu_aliastab_arm920t[] = {
  { "arm920", true},
  { "arm922t", true},
  { "arm940t", true},
  { "ep9312", true},
  { NULL, false}
};

static const cpu_alias cpu_aliastab_arm10tdmi[] = {
  { "arm1020t", true},
  { NULL, false}
};

static const cpu_arch_extension cpu_opttab_arm9e[] = {
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_alias cpu_aliastab_arm9e[] = {
  { "arm946e-s", true},
  { "arm966e-s", true},
  { "arm968e-s", true},
  { NULL, false}
};

static const cpu_arch_extension cpu_opttab_arm10e[] = {
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_alias cpu_aliastab_arm10e[] = {
  { "arm1020e", true},
  { "arm1022e", true},
  { NULL, false}
};

static const cpu_arch_extension cpu_opttab_arm926ejs[] = {
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_arm1026ejs[] = {
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_genericv7a[] = {
  {
    "mp", false, false,
    {
      isa_bit_mp, isa_nobit
    }
  },
  {
    "sec", false, false,
    {
      isa_bit_sec, isa_nobit
    }
  },
  {
    "vfpv3-d16", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "vfpv3", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_nobit
    }
  },
  {
    "vfpv3-d16-fp16", false, false,
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_nobit
    }
  },
  {
    "vfpv3-fp16", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "vfpv4-d16", false, false,
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "vfpv4", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "simd", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "neon-fp16", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_neon, isa_nobit
    }
  },
  {
    "neon-vfpv4", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "nosimd", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp16fml, isa_bit_crypto, isa_bit_dotprod, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "neon", false, true, 
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "neon-vfpv3", false, true, 
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa5[] = {
  {
    "nosimd", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp16fml, isa_bit_crypto, isa_bit_dotprod, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa7[] = {
  {
    "nosimd", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp16fml, isa_bit_crypto, isa_bit_dotprod, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa8[] = {
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa9[] = {
  {
    "nosimd", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp16fml, isa_bit_crypto, isa_bit_dotprod, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa12[] = {
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa15[] = {
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa17[] = {
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexr5[] = {
  {
    "nofp.dp", true, false,
    {
      isa_bit_fp_dbl, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexr7[] = {
  {
    "nofp.dp", true, false,
    {
      isa_bit_fp_dbl, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexr8[] = {
  {
    "nofp.dp", true, false,
    {
      isa_bit_fp_dbl, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexm7[] = {
  {
    "nofp.dp", true, false,
    {
      isa_bit_fp_dbl, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexm4[] = {
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa15cortexa7[] = {
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa17cortexa7[] = {
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa32[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa35[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa53[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa57[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa72[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa73[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_exynosm1[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_xgene1[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa57cortexa53[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa72cortexa53[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa73cortexa35[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa73cortexa53[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa55[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa75[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa76[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_neoversen1[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_alias cpu_aliastab_neoversen1[] = {
  { "ares", false},
  { NULL, false}
};

static const cpu_arch_extension cpu_opttab_cortexa75cortexa55[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexa76cortexa55[] = {
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexm33[] = {
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "nodsp", true, false,
    {
      isa_bit_armv7em, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const cpu_arch_extension cpu_opttab_cortexr52[] = {
  {
    "nofp.dp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16fml, isa_bit_crypto, 
      isa_bit_dotprod, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

const cpu_option all_cores[] =
{
  {
    {
      "arm8",
      NULL,
      {
        isa_bit_notm, isa_bit_armv4, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv4
  },
  {
    {
      "arm810",
      NULL,
      {
        isa_bit_notm, isa_bit_armv4, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv4
  },
  {
    {
      "strongarm",
      NULL,
      {
        isa_bit_notm, isa_bit_armv4, isa_nobit
      }
    },
    cpu_aliastab_strongarm,
    TARGET_ARCH_armv4
  },
  {
    {
      "fa526",
      NULL,
      {
        isa_bit_notm, isa_bit_armv4, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv4
  },
  {
    {
      "fa626",
      NULL,
      {
        isa_bit_notm, isa_bit_armv4, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv4
  },
  {
    {
      "arm7tdmi",
      NULL,
      {
        isa_bit_notm, isa_bit_armv4, isa_bit_thumb, isa_nobit
      }
    },
    cpu_aliastab_arm7tdmi,
    TARGET_ARCH_armv4t
  },
  {
    {
      "arm710t",
      NULL,
      {
        isa_bit_notm, isa_bit_armv4, isa_bit_thumb, isa_nobit
      }
    },
    cpu_aliastab_arm710t,
    TARGET_ARCH_armv4t
  },
  {
    {
      "arm9",
      NULL,
      {
        isa_bit_notm, isa_bit_armv4, isa_bit_thumb, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv4t
  },
  {
    {
      "arm9tdmi",
      NULL,
      {
        isa_bit_notm, isa_bit_armv4, isa_bit_thumb, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv4t
  },
  {
    {
      "arm920t",
      NULL,
      {
        isa_bit_notm, isa_bit_armv4, isa_bit_thumb, isa_nobit
      }
    },
    cpu_aliastab_arm920t,
    TARGET_ARCH_armv4t
  },
  {
    {
      "arm10tdmi",
      NULL,
      {
        isa_bit_notm, isa_bit_armv4, isa_bit_thumb, isa_bit_armv5t, 
        isa_nobit
      }
    },
    cpu_aliastab_arm10tdmi,
    TARGET_ARCH_armv5t
  },
  {
    {
      "arm9e",
      cpu_opttab_arm9e,
      {
        isa_bit_notm, isa_bit_fp_dbl, isa_bit_armv5te, isa_bit_armv4, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_armv5t, isa_nobit
      }
    },
    cpu_aliastab_arm9e,
    TARGET_ARCH_armv5te
  },
  {
    {
      "arm10e",
      cpu_opttab_arm10e,
      {
        isa_bit_notm, isa_bit_fp_dbl, isa_bit_armv5te, isa_bit_armv4, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_armv5t, isa_nobit
      }
    },
    cpu_aliastab_arm10e,
    TARGET_ARCH_armv5te
  },
  {
    {
      "xscale",
      NULL,
      {
        isa_bit_notm, isa_bit_xscale, isa_bit_armv5te, isa_bit_armv4, 
        isa_bit_thumb, isa_bit_armv5t, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv5te
  },
  {
    {
      "iwmmxt",
      NULL,
      {
        isa_bit_iwmmxt, isa_bit_notm, isa_bit_xscale, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_thumb, isa_bit_armv5t, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_iwmmxt
  },
  {
    {
      "iwmmxt2",
      NULL,
      {
        isa_bit_iwmmxt, isa_bit_notm, isa_bit_xscale, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_thumb, isa_bit_armv5t, isa_bit_iwmmxt2, 
        isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_iwmmxt2
  },
  {
    {
      "fa606te",
      NULL,
      {
        isa_bit_notm, isa_bit_armv5te, isa_bit_armv4, isa_bit_thumb, 
        isa_bit_armv5t, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv5te
  },
  {
    {
      "fa626te",
      NULL,
      {
        isa_bit_notm, isa_bit_armv5te, isa_bit_armv4, isa_bit_thumb, 
        isa_bit_armv5t, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv5te
  },
  {
    {
      "fmp626",
      NULL,
      {
        isa_bit_notm, isa_bit_armv5te, isa_bit_armv4, isa_bit_thumb, 
        isa_bit_armv5t, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv5te
  },
  {
    {
      "fa726te",
      NULL,
      {
        isa_bit_notm, isa_bit_armv5te, isa_bit_armv4, isa_bit_thumb, 
        isa_bit_armv5t, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv5te
  },
  {
    {
      "arm926ej-s",
      cpu_opttab_arm926ejs,
      {
        isa_bit_notm, isa_bit_fp_dbl, isa_bit_armv4, isa_bit_armv5te, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_armv5t, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv5tej
  },
  {
    {
      "arm1026ej-s",
      cpu_opttab_arm1026ejs,
      {
        isa_bit_notm, isa_bit_fp_dbl, isa_bit_armv4, isa_bit_armv5te, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_armv5t, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv5tej
  },
  {
    {
      "arm1136j-s",
      NULL,
      {
        isa_bit_notm, isa_bit_armv5te, isa_bit_armv4, isa_bit_thumb, 
        isa_bit_armv6, isa_bit_armv5t, isa_bit_be8, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6j
  },
  {
    {
      "arm1136jf-s",
      NULL,
      {
        isa_bit_notm, isa_bit_fp_dbl, isa_bit_armv5te, isa_bit_armv4, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_armv6, isa_bit_armv5t, 
        isa_bit_be8, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6j
  },
  {
    {
      "arm1176jz-s",
      NULL,
      {
        isa_bit_quirk_armv6kz, isa_bit_notm, isa_bit_armv6k, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_thumb, isa_bit_armv6, isa_bit_armv5t, 
        isa_bit_be8, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6kz
  },
  {
    {
      "arm1176jzf-s",
      NULL,
      {
        isa_bit_quirk_armv6kz, isa_bit_notm, isa_bit_armv6k, isa_bit_fp_dbl, 
        isa_bit_armv5te, isa_bit_armv4, isa_bit_vfpv2, isa_bit_thumb, 
        isa_bit_armv6, isa_bit_armv5t, isa_bit_be8, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6kz
  },
  {
    {
      "mpcorenovfp",
      NULL,
      {
        isa_bit_armv6k, isa_bit_notm, isa_bit_armv5te, isa_bit_armv4, 
        isa_bit_thumb, isa_bit_armv6, isa_bit_armv5t, isa_bit_be8, 
        isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6k
  },
  {
    {
      "mpcore",
      NULL,
      {
        isa_bit_armv6k, isa_bit_notm, isa_bit_fp_dbl, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_thumb, isa_bit_armv6, 
        isa_bit_armv5t, isa_bit_be8, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6k
  },
  {
    {
      "arm1156t2-s",
      NULL,
      {
        isa_bit_notm, isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, 
        isa_bit_armv6, isa_bit_thumb2, isa_bit_armv5t, isa_bit_be8, 
        isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6t2
  },
  {
    {
      "arm1156t2f-s",
      NULL,
      {
        isa_bit_notm, isa_bit_fp_dbl, isa_bit_armv4, isa_bit_armv5te, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_armv6, isa_bit_thumb2, 
        isa_bit_armv5t, isa_bit_be8, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6t2
  },
  {
    {
      "cortex-m1",
      NULL,
      {
        isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, isa_bit_armv6, 
        isa_bit_armv5t, isa_bit_be8, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6s_m
  },
  {
    {
      "cortex-m0",
      NULL,
      {
        isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, isa_bit_armv6, 
        isa_bit_armv5t, isa_bit_be8, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6s_m
  },
  {
    {
      "cortex-m0plus",
      NULL,
      {
        isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, isa_bit_armv6, 
        isa_bit_armv5t, isa_bit_be8, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6s_m
  },
  {
    {
      "cortex-m1.small-multiply",
      NULL,
      {
        isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, isa_bit_armv6, 
        isa_bit_armv5t, isa_bit_be8, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6s_m
  },
  {
    {
      "cortex-m0.small-multiply",
      NULL,
      {
        isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, isa_bit_armv6, 
        isa_bit_armv5t, isa_bit_be8, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6s_m
  },
  {
    {
      "cortex-m0plus.small-multiply",
      NULL,
      {
        isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, isa_bit_armv6, 
        isa_bit_armv5t, isa_bit_be8, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv6s_m
  },
  {
    {
      "generic-armv7-a",
      cpu_opttab_genericv7a,
      {
        isa_bit_armv6k, isa_bit_notm, isa_bit_fp_dbl, isa_bit_armv4, 
        isa_bit_armv5te, isa_bit_vfpv2, isa_bit_thumb, isa_bit_vfpv3, 
        isa_bit_armv6, isa_bit_thumb2, isa_bit_armv7, isa_bit_armv5t, 
        isa_bit_be8, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7_a
  },
  {
    {
      "cortex-a5",
      cpu_opttab_cortexa5,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_armv4, isa_bit_armv5te, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_vfpv3, isa_bit_sec, 
        isa_bit_armv6, isa_bit_thumb2, isa_bit_armv7, isa_bit_armv5t, 
        isa_bit_be8, isa_bit_neon, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7_a
  },
  {
    {
      "cortex-a7",
      cpu_opttab_cortexa7,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_armv5te, isa_bit_armv4, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_vfpv3, isa_bit_thumb2, 
        isa_bit_armv6, isa_bit_sec, isa_bit_vfpv4, isa_bit_armv5t, 
        isa_bit_armv7, isa_bit_be8, isa_bit_adiv, isa_bit_lpae, 
        isa_bit_neon, isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7ve
  },
  {
    {
      "cortex-a8",
      cpu_opttab_cortexa8,
      {
        isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, isa_bit_fp_dbl, 
        isa_bit_armv4, isa_bit_armv5te, isa_bit_vfpv2, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_sec, isa_bit_armv6, isa_bit_thumb2, 
        isa_bit_armv7, isa_bit_armv5t, isa_bit_be8, isa_bit_neon, 
        isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7_a
  },
  {
    {
      "cortex-a9",
      cpu_opttab_cortexa9,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_armv4, isa_bit_armv5te, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_vfpv3, isa_bit_sec, 
        isa_bit_armv6, isa_bit_thumb2, isa_bit_armv7, isa_bit_armv5t, 
        isa_bit_be8, isa_bit_neon, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7_a
  },
  {
    {
      "cortex-a12",
      cpu_opttab_cortexa12,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_armv5te, isa_bit_armv4, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_vfpv3, isa_bit_thumb2, 
        isa_bit_armv6, isa_bit_sec, isa_bit_vfpv4, isa_bit_armv5t, 
        isa_bit_armv7, isa_bit_be8, isa_bit_adiv, isa_bit_lpae, 
        isa_bit_neon, isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7ve
  },
  {
    {
      "cortex-a15",
      cpu_opttab_cortexa15,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_armv5te, isa_bit_armv4, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_vfpv3, isa_bit_thumb2, 
        isa_bit_armv6, isa_bit_sec, isa_bit_vfpv4, isa_bit_armv5t, 
        isa_bit_armv7, isa_bit_be8, isa_bit_adiv, isa_bit_lpae, 
        isa_bit_neon, isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7ve
  },
  {
    {
      "cortex-a17",
      cpu_opttab_cortexa17,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_armv5te, isa_bit_armv4, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_vfpv3, isa_bit_thumb2, 
        isa_bit_armv6, isa_bit_sec, isa_bit_vfpv4, isa_bit_armv5t, 
        isa_bit_armv7, isa_bit_be8, isa_bit_adiv, isa_bit_lpae, 
        isa_bit_neon, isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7ve
  },
  {
    {
      "cortex-r4",
      NULL,
      {
        isa_bit_notm, isa_bit_armv6k, isa_bit_armv5te, isa_bit_armv4, 
        isa_bit_thumb, isa_bit_thumb2, isa_bit_armv6, isa_bit_armv5t, 
        isa_bit_armv7, isa_bit_be8, isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7_r
  },
  {
    {
      "cortex-r4f",
      NULL,
      {
        isa_bit_notm, isa_bit_armv6k, isa_bit_fp_dbl, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_thumb, isa_bit_vfpv3, 
        isa_bit_thumb2, isa_bit_armv6, isa_bit_armv5t, isa_bit_armv7, 
        isa_bit_be8, isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7_r
  },
  {
    {
      "cortex-r5",
      cpu_opttab_cortexr5,
      {
        isa_bit_notm, isa_bit_armv6k, isa_bit_fp_dbl, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_thumb, isa_bit_vfpv3, 
        isa_bit_thumb2, isa_bit_armv6, isa_bit_armv5t, isa_bit_armv7, 
        isa_bit_adiv, isa_bit_be8, isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7_r
  },
  {
    {
      "cortex-r7",
      cpu_opttab_cortexr7,
      {
        isa_bit_notm, isa_bit_armv6k, isa_bit_fp_dbl, isa_bit_fp16conv, 
        isa_bit_armv5te, isa_bit_armv4, isa_bit_vfpv2, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_thumb2, isa_bit_armv6, isa_bit_armv5t, 
        isa_bit_armv7, isa_bit_adiv, isa_bit_be8, isa_bit_tdiv, 
        isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7_r
  },
  {
    {
      "cortex-r8",
      cpu_opttab_cortexr8,
      {
        isa_bit_notm, isa_bit_armv6k, isa_bit_fp_dbl, isa_bit_fp16conv, 
        isa_bit_armv5te, isa_bit_armv4, isa_bit_vfpv2, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_thumb2, isa_bit_armv6, isa_bit_armv5t, 
        isa_bit_armv7, isa_bit_adiv, isa_bit_be8, isa_bit_tdiv, 
        isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7_r
  },
  {
    {
      "cortex-m7",
      cpu_opttab_cortexm7,
      {
        isa_bit_quirk_no_volatile_ce, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, 
        isa_bit_armv5te, isa_bit_armv4, isa_bit_vfpv2, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_thumb2, isa_bit_armv6, isa_bit_vfpv4, 
        isa_bit_armv7, isa_bit_armv7em, isa_bit_armv5t, isa_bit_be8, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7e_m
  },
  {
    {
      "cortex-m4",
      cpu_opttab_cortexm4,
      {
        isa_bit_fp16conv, isa_bit_armv5te, isa_bit_armv4, isa_bit_vfpv2, 
        isa_bit_thumb, isa_bit_vfpv3, isa_bit_thumb2, isa_bit_armv6, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv7em, isa_bit_armv5t, 
        isa_bit_be8, isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7e_m
  },
  {
    {
      "cortex-m3",
      NULL,
      {
        isa_bit_quirk_cm3_ldrd, isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, 
        isa_bit_armv6, isa_bit_thumb2, isa_bit_armv7, isa_bit_armv5t, 
        isa_bit_be8, isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7_m
  },
  {
    {
      "marvell-pj4",
      NULL,
      {
        isa_bit_mp, isa_bit_armv6k, isa_bit_notm, isa_bit_armv4, 
        isa_bit_armv5te, isa_bit_thumb, isa_bit_sec, isa_bit_armv6, 
        isa_bit_thumb2, isa_bit_armv7, isa_bit_armv5t, isa_bit_be8, 
        isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7_a
  },
  {
    {
      "cortex-a15.cortex-a7",
      cpu_opttab_cortexa15cortexa7,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_armv5te, isa_bit_armv4, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_vfpv3, isa_bit_thumb2, 
        isa_bit_armv6, isa_bit_sec, isa_bit_vfpv4, isa_bit_armv5t, 
        isa_bit_armv7, isa_bit_be8, isa_bit_adiv, isa_bit_lpae, 
        isa_bit_neon, isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7ve
  },
  {
    {
      "cortex-a17.cortex-a7",
      cpu_opttab_cortexa17cortexa7,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_armv5te, isa_bit_armv4, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_vfpv3, isa_bit_thumb2, 
        isa_bit_armv6, isa_bit_sec, isa_bit_vfpv4, isa_bit_armv5t, 
        isa_bit_armv7, isa_bit_be8, isa_bit_adiv, isa_bit_lpae, 
        isa_bit_neon, isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv7ve
  },
  {
    {
      "cortex-a32",
      cpu_opttab_cortexa32,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_crc32, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_armv6, isa_bit_sec, isa_bit_thumb2, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_armv8, 
        isa_bit_be8, isa_bit_adiv, isa_bit_lpae, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_a
  },
  {
    {
      "cortex-a35",
      cpu_opttab_cortexa35,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_crc32, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_armv6, isa_bit_sec, isa_bit_thumb2, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_armv8, 
        isa_bit_be8, isa_bit_adiv, isa_bit_lpae, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_a
  },
  {
    {
      "cortex-a53",
      cpu_opttab_cortexa53,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_crc32, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_armv6, isa_bit_sec, isa_bit_thumb2, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_armv8, 
        isa_bit_be8, isa_bit_adiv, isa_bit_lpae, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_a
  },
  {
    {
      "cortex-a57",
      cpu_opttab_cortexa57,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_crc32, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_armv6, isa_bit_sec, isa_bit_thumb2, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_armv8, 
        isa_bit_be8, isa_bit_adiv, isa_bit_lpae, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_a
  },
  {
    {
      "cortex-a72",
      cpu_opttab_cortexa72,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_crc32, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_armv6, isa_bit_sec, isa_bit_thumb2, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_armv8, 
        isa_bit_be8, isa_bit_adiv, isa_bit_lpae, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_a
  },
  {
    {
      "cortex-a73",
      cpu_opttab_cortexa73,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_crc32, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_armv6, isa_bit_sec, isa_bit_thumb2, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_armv8, 
        isa_bit_be8, isa_bit_adiv, isa_bit_lpae, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_a
  },
  {
    {
      "exynos-m1",
      cpu_opttab_exynosm1,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_crc32, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_armv6, isa_bit_sec, isa_bit_thumb2, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_armv8, 
        isa_bit_be8, isa_bit_adiv, isa_bit_lpae, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_a
  },
  {
    {
      "xgene1",
      cpu_opttab_xgene1,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_thumb, isa_bit_vfpv3, 
        isa_bit_armv6, isa_bit_sec, isa_bit_thumb2, isa_bit_vfpv4, 
        isa_bit_armv7, isa_bit_armv5t, isa_bit_armv8, isa_bit_be8, 
        isa_bit_adiv, isa_bit_lpae, isa_bit_neon, isa_bit_tdiv, 
        isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_a
  },
  {
    {
      "cortex-a57.cortex-a53",
      cpu_opttab_cortexa57cortexa53,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_crc32, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_armv6, isa_bit_sec, isa_bit_thumb2, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_armv8, 
        isa_bit_be8, isa_bit_adiv, isa_bit_lpae, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_a
  },
  {
    {
      "cortex-a72.cortex-a53",
      cpu_opttab_cortexa72cortexa53,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_crc32, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_armv6, isa_bit_sec, isa_bit_thumb2, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_armv8, 
        isa_bit_be8, isa_bit_adiv, isa_bit_lpae, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_a
  },
  {
    {
      "cortex-a73.cortex-a35",
      cpu_opttab_cortexa73cortexa35,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_crc32, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_armv6, isa_bit_sec, isa_bit_thumb2, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_armv8, 
        isa_bit_be8, isa_bit_adiv, isa_bit_lpae, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_a
  },
  {
    {
      "cortex-a73.cortex-a53",
      cpu_opttab_cortexa73cortexa53,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_armv5te, 
        isa_bit_armv4, isa_bit_vfpv2, isa_bit_crc32, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_armv6, isa_bit_sec, isa_bit_thumb2, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_armv8, 
        isa_bit_be8, isa_bit_adiv, isa_bit_lpae, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_a
  },
  {
    {
      "cortex-a55",
      cpu_opttab_cortexa55,
      {
        isa_bit_mp, isa_bit_armv8_1, isa_bit_fp_d32, isa_bit_armv6k, 
        isa_bit_armv8_2, isa_bit_notm, isa_bit_fp_dbl, isa_bit_fp16conv, 
        isa_bit_fp16, isa_bit_fpv5, isa_bit_armv4, isa_bit_armv5te, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_crc32, isa_bit_vfpv3, 
        isa_bit_armv6, isa_bit_thumb2, isa_bit_sec, isa_bit_dotprod, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_adiv, 
        isa_bit_lpae, isa_bit_armv8, isa_bit_be8, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_2_a
  },
  {
    {
      "cortex-a75",
      cpu_opttab_cortexa75,
      {
        isa_bit_mp, isa_bit_armv8_1, isa_bit_fp_d32, isa_bit_armv6k, 
        isa_bit_armv8_2, isa_bit_notm, isa_bit_fp_dbl, isa_bit_fp16conv, 
        isa_bit_fp16, isa_bit_fpv5, isa_bit_armv4, isa_bit_armv5te, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_crc32, isa_bit_vfpv3, 
        isa_bit_armv6, isa_bit_thumb2, isa_bit_sec, isa_bit_dotprod, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_adiv, 
        isa_bit_lpae, isa_bit_armv8, isa_bit_be8, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_2_a
  },
  {
    {
      "cortex-a76",
      cpu_opttab_cortexa76,
      {
        isa_bit_mp, isa_bit_armv8_1, isa_bit_fp_d32, isa_bit_armv6k, 
        isa_bit_armv8_2, isa_bit_notm, isa_bit_fp_dbl, isa_bit_fp16conv, 
        isa_bit_fp16, isa_bit_fpv5, isa_bit_armv4, isa_bit_armv5te, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_crc32, isa_bit_vfpv3, 
        isa_bit_armv6, isa_bit_thumb2, isa_bit_sec, isa_bit_dotprod, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_adiv, 
        isa_bit_lpae, isa_bit_armv8, isa_bit_be8, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_2_a
  },
  {
    {
      "neoverse-n1",
      cpu_opttab_neoversen1,
      {
        isa_bit_mp, isa_bit_armv8_1, isa_bit_fp_d32, isa_bit_armv6k, 
        isa_bit_armv8_2, isa_bit_notm, isa_bit_fp_dbl, isa_bit_fp16conv, 
        isa_bit_fp16, isa_bit_fpv5, isa_bit_armv4, isa_bit_armv5te, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_crc32, isa_bit_vfpv3, 
        isa_bit_armv6, isa_bit_thumb2, isa_bit_sec, isa_bit_dotprod, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_adiv, 
        isa_bit_lpae, isa_bit_armv8, isa_bit_be8, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    cpu_aliastab_neoversen1,
    TARGET_ARCH_armv8_2_a
  },
  {
    {
      "cortex-a75.cortex-a55",
      cpu_opttab_cortexa75cortexa55,
      {
        isa_bit_mp, isa_bit_armv8_1, isa_bit_fp_d32, isa_bit_armv6k, 
        isa_bit_armv8_2, isa_bit_notm, isa_bit_fp_dbl, isa_bit_fp16conv, 
        isa_bit_fp16, isa_bit_fpv5, isa_bit_armv4, isa_bit_armv5te, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_crc32, isa_bit_vfpv3, 
        isa_bit_armv6, isa_bit_thumb2, isa_bit_sec, isa_bit_dotprod, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_adiv, 
        isa_bit_lpae, isa_bit_armv8, isa_bit_be8, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_2_a
  },
  {
    {
      "cortex-a76.cortex-a55",
      cpu_opttab_cortexa76cortexa55,
      {
        isa_bit_mp, isa_bit_armv8_1, isa_bit_fp_d32, isa_bit_armv6k, 
        isa_bit_armv8_2, isa_bit_notm, isa_bit_fp_dbl, isa_bit_fp16conv, 
        isa_bit_fp16, isa_bit_fpv5, isa_bit_armv4, isa_bit_armv5te, 
        isa_bit_vfpv2, isa_bit_thumb, isa_bit_crc32, isa_bit_vfpv3, 
        isa_bit_armv6, isa_bit_thumb2, isa_bit_sec, isa_bit_dotprod, 
        isa_bit_vfpv4, isa_bit_armv7, isa_bit_armv5t, isa_bit_adiv, 
        isa_bit_lpae, isa_bit_armv8, isa_bit_be8, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_2_a
  },
  {
    {
      "cortex-m23",
      NULL,
      {
        isa_bit_cmse, isa_bit_armv5te, isa_bit_armv4, isa_bit_thumb, 
        isa_bit_armv6, isa_bit_armv5t, isa_bit_be8, isa_bit_armv8, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_m_base
  },
  {
    {
      "cortex-m33",
      cpu_opttab_cortexm33,
      {
        isa_bit_fp16conv, isa_bit_cmse, isa_bit_fpv5, isa_bit_armv4, 
        isa_bit_armv5te, isa_bit_vfpv2, isa_bit_thumb, isa_bit_vfpv3, 
        isa_bit_armv6, isa_bit_thumb2, isa_bit_vfpv4, isa_bit_armv7em, 
        isa_bit_armv7, isa_bit_armv5t, isa_bit_be8, isa_bit_armv8, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_m_main
  },
  {
    {
      "cortex-r52",
      cpu_opttab_cortexr52,
      {
        isa_bit_mp, isa_bit_fp_d32, isa_bit_armv6k, isa_bit_notm, 
        isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_armv4, 
        isa_bit_armv5te, isa_bit_vfpv2, isa_bit_crc32, isa_bit_thumb, 
        isa_bit_vfpv3, isa_bit_sec, isa_bit_armv6, isa_bit_thumb2, 
        isa_bit_vfpv4, isa_bit_armv5t, isa_bit_armv7, isa_bit_adiv, 
        isa_bit_lpae, isa_bit_be8, isa_bit_armv8, isa_bit_neon, 
        isa_bit_tdiv, isa_nobit
      }
    },
    NULL,
    TARGET_ARCH_armv8_r
  },
  {{NULL, NULL, {isa_nobit}}, NULL, TARGET_ARCH_arm_none}
};
static const struct cpu_arch_extension arch_opttab_armv5te[] = {
  {
    "fp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv2", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv5tej[] = {
  {
    "fp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv2", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv6[] = {
  {
    "fp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv2", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv6j[] = {
  {
    "fp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv2", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv6k[] = {
  {
    "fp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv2", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv6z[] = {
  {
    "fp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv2", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv6kz[] = {
  {
    "fp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv2", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv6zk[] = {
  {
    "fp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv2", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv6t2[] = {
  {
    "fp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv2", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv7[] = {
  {
    "fp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv3-d16", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv7_a[] = {
  {
    "mp", false, false,
    {
      isa_bit_mp, isa_nobit
    }
  },
  {
    "sec", false, false,
    {
      isa_bit_sec, isa_nobit
    }
  },
  {
    "fp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "vfpv3", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_nobit
    }
  },
  {
    "vfpv3-d16-fp16", false, false,
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_nobit
    }
  },
  {
    "vfpv3-fp16", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "vfpv4-d16", false, false,
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "vfpv4", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "simd", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "neon-fp16", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_neon, isa_nobit
    }
  },
  {
    "neon-vfpv4", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "nosimd", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp16fml, isa_bit_crypto, isa_bit_dotprod, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv3-d16", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "neon", false, true, 
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "neon-vfpv3", false, true, 
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv7ve[] = {
  {
    "vfpv3-d16", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "vfpv3", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_nobit
    }
  },
  {
    "vfpv3-d16-fp16", false, false,
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_nobit
    }
  },
  {
    "vfpv3-fp16", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "fp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "vfpv4", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "neon", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "neon-fp16", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_neon, isa_nobit
    }
  },
  {
    "simd", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "nosimd", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp16fml, isa_bit_crypto, isa_bit_dotprod, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv4-d16", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "neon-vfpv3", false, true, 
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "neon-vfpv4", false, true, 
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv7_r[] = {
  {
    "fp.sp", false, false,
    {
      isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "fp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "vfpv3xd-fp16", false, false,
    {
      isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "vfpv3-d16-fp16", false, false,
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_nobit
    }
  },
  {
    "idiv", false, false,
    {
      isa_bit_adiv, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "noidiv", true, false,
    {
      isa_bit_adiv, isa_nobit
    }
  },
  {
    "vfpv3xd", false, true, 
    {
      isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "vfpv3-d16", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv7e_m[] = {
  {
    "fp", false, false,
    {
      isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_nobit
    }
  },
  {
    "fpv5", false, false,
    {
      isa_bit_fp16conv, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "fp.dp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv4-sp-d16", false, true, 
    {
      isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_nobit
    }
  },
  {
    "fpv5-d16", false, true, 
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_vfpv4, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv8_a[] = {
  {
    "crc", false, false,
    {
      isa_bit_crc32, isa_nobit
    }
  },
  {
    "simd", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, 
      isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, isa_bit_neon, 
      isa_nobit
    }
  },
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nocrypto", true, false,
    {
      isa_bit_crypto, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "sb", false, false,
    {
      isa_bit_sb, isa_nobit
    }
  },
  {
    "predres", false, false,
    {
      isa_bit_predres, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv8_1_a[] = {
  {
    "simd", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, 
      isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, isa_bit_neon, 
      isa_nobit
    }
  },
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nocrypto", true, false,
    {
      isa_bit_crypto, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "sb", false, false,
    {
      isa_bit_sb, isa_nobit
    }
  },
  {
    "predres", false, false,
    {
      isa_bit_predres, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv8_2_a[] = {
  {
    "simd", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, 
      isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, isa_bit_neon, 
      isa_nobit
    }
  },
  {
    "fp16", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "fp16fml", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_fp16fml, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nocrypto", true, false,
    {
      isa_bit_crypto, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "dotprod", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, 
      isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_dotprod, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "sb", false, false,
    {
      isa_bit_sb, isa_nobit
    }
  },
  {
    "predres", false, false,
    {
      isa_bit_predres, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv8_3_a[] = {
  {
    "simd", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, 
      isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, isa_bit_neon, 
      isa_nobit
    }
  },
  {
    "fp16", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "fp16fml", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_fp16fml, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nocrypto", true, false,
    {
      isa_bit_crypto, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "dotprod", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, 
      isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_dotprod, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "sb", false, false,
    {
      isa_bit_sb, isa_nobit
    }
  },
  {
    "predres", false, false,
    {
      isa_bit_predres, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv8_4_a[] = {
  {
    "simd", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, 
      isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_dotprod, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "fp16", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16fml, 
      isa_bit_fp16, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_dotprod, isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_dotprod, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "nocrypto", true, false,
    {
      isa_bit_crypto, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "sb", false, false,
    {
      isa_bit_sb, isa_nobit
    }
  },
  {
    "predres", false, false,
    {
      isa_bit_predres, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv8_5_a[] = {
  {
    "simd", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, 
      isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_dotprod, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "fp16", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16fml, 
      isa_bit_fp16, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_dotprod, isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_dotprod, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "nocrypto", true, false,
    {
      isa_bit_crypto, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv8_m_main[] = {
  {
    "dsp", false, false,
    {
      isa_bit_armv7em, isa_nobit
    }
  },
  {
    "fp", false, false,
    {
      isa_bit_fp16conv, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "fp.dp", false, false,
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "nodsp", true, false,
    {
      isa_bit_armv7em, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

static const struct cpu_arch_extension arch_opttab_armv8_r[] = {
  {
    "crc", false, false,
    {
      isa_bit_crc32, isa_nobit
    }
  },
  {
    "fp.sp", false, false,
    {
      isa_bit_fp16conv, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "simd", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, 
      isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, isa_bit_neon, 
      isa_nobit
    }
  },
  {
    "crypto", false, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "nocrypto", true, false,
    {
      isa_bit_crypto, isa_nobit
    }
  },
  {
    "nofp", true, false,
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fp16, 
      isa_bit_crypto, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  { NULL, false, false, {isa_nobit}}
};

const arch_option all_architectures[] =
{
  {
    "armv4",
    NULL,
    {
      isa_bit_notm, isa_bit_armv4, isa_nobit
    },
    "4", BASE_ARCH_4,
    0,
    TARGET_CPU_arm7tdmi,
  },
  {
    "armv4t",
    NULL,
    {
      isa_bit_notm, isa_bit_armv4, isa_bit_thumb, isa_nobit
    },
    "4T", BASE_ARCH_4T,
    0,
    TARGET_CPU_arm7tdmi,
  },
  {
    "armv5t",
    NULL,
    {
      isa_bit_notm, isa_bit_armv4, isa_bit_thumb, isa_bit_armv5t, 
      isa_nobit
    },
    "5T", BASE_ARCH_5T,
    0,
    TARGET_CPU_arm10tdmi,
  },
  {
    "armv5te",
    arch_opttab_armv5te,
    {
      isa_bit_notm, isa_bit_armv5te, isa_bit_armv4, isa_bit_thumb, 
      isa_bit_armv5t, isa_nobit
    },
    "5TE", BASE_ARCH_5TE,
    0,
    TARGET_CPU_arm1026ejs,
  },
  {
    "armv5tej",
    arch_opttab_armv5tej,
    {
      isa_bit_notm, isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, 
      isa_bit_armv5t, isa_nobit
    },
    "5TEJ", BASE_ARCH_5TEJ,
    0,
    TARGET_CPU_arm1026ejs,
  },
  {
    "armv6",
    arch_opttab_armv6,
    {
      isa_bit_notm, isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, 
      isa_bit_armv6, isa_bit_armv5t, isa_bit_be8, isa_nobit
    },
    "6", BASE_ARCH_6,
    0,
    TARGET_CPU_arm1136js,
  },
  {
    "armv6j",
    arch_opttab_armv6j,
    {
      isa_bit_notm, isa_bit_armv5te, isa_bit_armv4, isa_bit_thumb, 
      isa_bit_armv6, isa_bit_armv5t, isa_bit_be8, isa_nobit
    },
    "6J", BASE_ARCH_6J,
    0,
    TARGET_CPU_arm1136js,
  },
  {
    "armv6k",
    arch_opttab_armv6k,
    {
      isa_bit_armv6k, isa_bit_notm, isa_bit_armv5te, isa_bit_armv4, 
      isa_bit_thumb, isa_bit_armv6, isa_bit_armv5t, isa_bit_be8, 
      isa_nobit
    },
    "6K", BASE_ARCH_6K,
    0,
    TARGET_CPU_mpcore,
  },
  {
    "armv6z",
    arch_opttab_armv6z,
    {
      isa_bit_notm, isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, 
      isa_bit_armv6, isa_bit_armv5t, isa_bit_be8, isa_nobit
    },
    "6Z", BASE_ARCH_6Z,
    0,
    TARGET_CPU_arm1176jzs,
  },
  {
    "armv6kz",
    arch_opttab_armv6kz,
    {
      isa_bit_quirk_armv6kz, isa_bit_notm, isa_bit_armv6k, isa_bit_armv5te, 
      isa_bit_armv4, isa_bit_thumb, isa_bit_armv6, isa_bit_armv5t, 
      isa_bit_be8, isa_nobit
    },
    "6KZ", BASE_ARCH_6KZ,
    0,
    TARGET_CPU_arm1176jzs,
  },
  {
    "armv6zk",
    arch_opttab_armv6zk,
    {
      isa_bit_quirk_armv6kz, isa_bit_notm, isa_bit_armv6k, isa_bit_armv5te, 
      isa_bit_armv4, isa_bit_thumb, isa_bit_armv6, isa_bit_armv5t, 
      isa_bit_be8, isa_nobit
    },
    "6KZ", BASE_ARCH_6KZ,
    0,
    TARGET_CPU_arm1176jzs,
  },
  {
    "armv6t2",
    arch_opttab_armv6t2,
    {
      isa_bit_notm, isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, 
      isa_bit_armv6, isa_bit_thumb2, isa_bit_armv5t, isa_bit_be8, 
      isa_nobit
    },
    "6T2", BASE_ARCH_6T2,
    0,
    TARGET_CPU_arm1156t2s,
  },
  {
    "armv6-m",
    NULL,
    {
      isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, isa_bit_armv6, 
      isa_bit_armv5t, isa_bit_be8, isa_nobit
    },
    "6M", BASE_ARCH_6M,
    'M',
    TARGET_CPU_cortexm1,
  },
  {
    "armv6s-m",
    NULL,
    {
      isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, isa_bit_armv6, 
      isa_bit_armv5t, isa_bit_be8, isa_nobit
    },
    "6M", BASE_ARCH_6M,
    'M',
    TARGET_CPU_cortexm1,
  },
  {
    "armv7",
    arch_opttab_armv7,
    {
      isa_bit_armv5te, isa_bit_armv4, isa_bit_thumb, isa_bit_thumb2, 
      isa_bit_armv6, isa_bit_armv5t, isa_bit_armv7, isa_bit_be8, 
      isa_nobit
    },
    "7", BASE_ARCH_7,
    0,
    TARGET_CPU_cortexa8,
  },
  {
    "armv7-a",
    arch_opttab_armv7_a,
    {
      isa_bit_armv6k, isa_bit_notm, isa_bit_armv4, isa_bit_armv5te, 
      isa_bit_thumb, isa_bit_armv6, isa_bit_thumb2, isa_bit_armv7, 
      isa_bit_armv5t, isa_bit_be8, isa_nobit
    },
    "7A", BASE_ARCH_7A,
    'A',
    TARGET_CPU_cortexa8,
  },
  {
    "armv7ve",
    arch_opttab_armv7ve,
    {
      isa_bit_mp, isa_bit_armv6k, isa_bit_notm, isa_bit_armv5te, 
      isa_bit_armv4, isa_bit_thumb, isa_bit_thumb2, isa_bit_armv6, 
      isa_bit_sec, isa_bit_armv5t, isa_bit_armv7, isa_bit_be8, 
      isa_bit_adiv, isa_bit_lpae, isa_bit_tdiv, isa_nobit
    },
    "7A", BASE_ARCH_7A,
    'A',
    TARGET_CPU_cortexa8,
  },
  {
    "armv7-r",
    arch_opttab_armv7_r,
    {
      isa_bit_notm, isa_bit_armv6k, isa_bit_armv5te, isa_bit_armv4, 
      isa_bit_thumb, isa_bit_thumb2, isa_bit_armv6, isa_bit_armv5t, 
      isa_bit_armv7, isa_bit_be8, isa_bit_tdiv, isa_nobit
    },
    "7R", BASE_ARCH_7R,
    'R',
    TARGET_CPU_cortexr4,
  },
  {
    "armv7-m",
    NULL,
    {
      isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, isa_bit_armv6, 
      isa_bit_thumb2, isa_bit_armv7, isa_bit_armv5t, isa_bit_be8, 
      isa_bit_tdiv, isa_nobit
    },
    "7M", BASE_ARCH_7M,
    'M',
    TARGET_CPU_cortexm3,
  },
  {
    "armv7e-m",
    arch_opttab_armv7e_m,
    {
      isa_bit_armv5te, isa_bit_armv4, isa_bit_thumb, isa_bit_thumb2, 
      isa_bit_armv6, isa_bit_armv7, isa_bit_armv7em, isa_bit_armv5t, 
      isa_bit_be8, isa_bit_tdiv, isa_nobit
    },
    "7EM", BASE_ARCH_7EM,
    'M',
    TARGET_CPU_cortexm4,
  },
  {
    "armv8-a",
    arch_opttab_armv8_a,
    {
      isa_bit_mp, isa_bit_armv6k, isa_bit_notm, isa_bit_armv5te, 
      isa_bit_armv4, isa_bit_thumb, isa_bit_armv6, isa_bit_sec, 
      isa_bit_thumb2, isa_bit_armv7, isa_bit_armv5t, isa_bit_armv8, 
      isa_bit_be8, isa_bit_adiv, isa_bit_lpae, isa_bit_tdiv, 
      isa_nobit
    },
    "8A", BASE_ARCH_8A,
    'A',
    TARGET_CPU_cortexa53,
  },
  {
    "armv8.1-a",
    arch_opttab_armv8_1_a,
    {
      isa_bit_mp, isa_bit_armv8_1, isa_bit_armv6k, isa_bit_notm, 
      isa_bit_armv5te, isa_bit_armv4, isa_bit_thumb, isa_bit_crc32, 
      isa_bit_sec, isa_bit_armv6, isa_bit_thumb2, isa_bit_armv7, 
      isa_bit_armv5t, isa_bit_armv8, isa_bit_be8, isa_bit_adiv, 
      isa_bit_lpae, isa_bit_tdiv, isa_nobit
    },
    "8A", BASE_ARCH_8A,
    'A',
    TARGET_CPU_cortexa53,
  },
  {
    "armv8.2-a",
    arch_opttab_armv8_2_a,
    {
      isa_bit_mp, isa_bit_armv8_1, isa_bit_armv6k, isa_bit_armv8_2, 
      isa_bit_notm, isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, 
      isa_bit_crc32, isa_bit_armv6, isa_bit_thumb2, isa_bit_sec, 
      isa_bit_armv7, isa_bit_armv5t, isa_bit_adiv, isa_bit_lpae, 
      isa_bit_armv8, isa_bit_be8, isa_bit_tdiv, isa_nobit
    },
    "8A", BASE_ARCH_8A,
    'A',
    TARGET_CPU_cortexa53,
  },
  {
    "armv8.3-a",
    arch_opttab_armv8_3_a,
    {
      isa_bit_mp, isa_bit_armv8_1, isa_bit_armv6k, isa_bit_notm, 
      isa_bit_armv8_2, isa_bit_armv8_3, isa_bit_armv4, isa_bit_armv5te, 
      isa_bit_thumb, isa_bit_crc32, isa_bit_armv6, isa_bit_thumb2, 
      isa_bit_sec, isa_bit_armv7, isa_bit_armv5t, isa_bit_be8, 
      isa_bit_armv8, isa_bit_adiv, isa_bit_lpae, isa_bit_tdiv, 
      isa_nobit
    },
    "8A", BASE_ARCH_8A,
    'A',
    TARGET_CPU_cortexa53,
  },
  {
    "armv8.4-a",
    arch_opttab_armv8_4_a,
    {
      isa_bit_mp, isa_bit_armv8_1, isa_bit_armv6k, isa_bit_notm, 
      isa_bit_armv8_2, isa_bit_armv8_3, isa_bit_armv8_4, isa_bit_armv5te, 
      isa_bit_armv4, isa_bit_thumb, isa_bit_crc32, isa_bit_sec, 
      isa_bit_armv6, isa_bit_thumb2, isa_bit_armv7, isa_bit_armv5t, 
      isa_bit_be8, isa_bit_adiv, isa_bit_lpae, isa_bit_armv8, 
      isa_bit_tdiv, isa_nobit
    },
    "8A", BASE_ARCH_8A,
    'A',
    TARGET_CPU_cortexa53,
  },
  {
    "armv8.5-a",
    arch_opttab_armv8_5_a,
    {
      isa_bit_mp, isa_bit_armv8_1, isa_bit_armv6k, isa_bit_notm, 
      isa_bit_armv8_2, isa_bit_armv8_3, isa_bit_predres, isa_bit_armv8_4, 
      isa_bit_armv8_5, isa_bit_sb, isa_bit_armv4, isa_bit_armv5te, 
      isa_bit_thumb, isa_bit_crc32, isa_bit_sec, isa_bit_armv6, 
      isa_bit_thumb2, isa_bit_armv7, isa_bit_armv5t, isa_bit_lpae, 
      isa_bit_armv8, isa_bit_be8, isa_bit_adiv, isa_bit_tdiv, 
      isa_nobit
    },
    "8A", BASE_ARCH_8A,
    'A',
    TARGET_CPU_cortexa53,
  },
  {
    "armv8-m.base",
    NULL,
    {
      isa_bit_cmse, isa_bit_armv5te, isa_bit_armv4, isa_bit_thumb, 
      isa_bit_armv6, isa_bit_armv5t, isa_bit_be8, isa_bit_armv8, 
      isa_bit_tdiv, isa_nobit
    },
    "8M_BASE", BASE_ARCH_8M_BASE,
    'M',
    TARGET_CPU_cortexm23,
  },
  {
    "armv8-m.main",
    arch_opttab_armv8_m_main,
    {
      isa_bit_cmse, isa_bit_armv4, isa_bit_armv5te, isa_bit_thumb, 
      isa_bit_armv6, isa_bit_thumb2, isa_bit_armv7, isa_bit_armv5t, 
      isa_bit_be8, isa_bit_armv8, isa_bit_tdiv, isa_nobit
    },
    "8M_MAIN", BASE_ARCH_8M_MAIN,
    'M',
    TARGET_CPU_cortexm7,
  },
  {
    "armv8-r",
    arch_opttab_armv8_r,
    {
      isa_bit_mp, isa_bit_armv6k, isa_bit_notm, isa_bit_armv4, 
      isa_bit_armv5te, isa_bit_thumb, isa_bit_sec, isa_bit_armv6, 
      isa_bit_thumb2, isa_bit_armv5t, isa_bit_armv7, isa_bit_adiv, 
      isa_bit_lpae, isa_bit_be8, isa_bit_armv8, isa_bit_tdiv, 
      isa_nobit
    },
    "8R", BASE_ARCH_8R,
    'R',
    TARGET_CPU_cortexr52,
  },
  {
    "iwmmxt",
    NULL,
    {
      isa_bit_iwmmxt, isa_bit_notm, isa_bit_xscale, isa_bit_armv5te, 
      isa_bit_armv4, isa_bit_thumb, isa_bit_armv5t, isa_nobit
    },
    "5TE", BASE_ARCH_5TE,
    0,
    TARGET_CPU_iwmmxt,
  },
  {
    "iwmmxt2",
    NULL,
    {
      isa_bit_iwmmxt, isa_bit_notm, isa_bit_xscale, isa_bit_armv5te, 
      isa_bit_armv4, isa_bit_thumb, isa_bit_armv5t, isa_bit_iwmmxt2, 
      isa_nobit
    },
    "5TE", BASE_ARCH_5TE,
    0,
    TARGET_CPU_iwmmxt2,
  },
  {{NULL, NULL, {isa_nobit}},
   NULL, BASE_ARCH_0, 0, TARGET_CPU_arm_none}
};

const arm_fpu_desc all_fpus[] =
{
  {
    "vfp",
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  {
    "vfpv2",
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_nobit
    }
  },
  {
    "vfpv3",
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_nobit
    }
  },
  {
    "vfpv3-fp16",
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "vfpv3-d16",
    {
      isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "vfpv3-d16-fp16",
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_nobit
    }
  },
  {
    "vfpv3xd",
    {
      isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "vfpv3xd-fp16",
    {
      isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, isa_nobit
    }
  },
  {
    "neon",
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "neon-vfpv3",
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "neon-fp16",
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv4",
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "neon-vfpv4",
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_vfpv4, isa_bit_neon, isa_nobit
    }
  },
  {
    "vfpv4-d16",
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "fpv4-sp-d16",
    {
      isa_bit_fp16conv, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_nobit
    }
  },
  {
    "fpv5-sp-d16",
    {
      isa_bit_fp16conv, isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "fpv5-d16",
    {
      isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, isa_bit_vfpv2, 
      isa_bit_vfpv3, isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "fp-armv8",
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, 
      isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, isa_nobit
    }
  },
  {
    "neon-fp-armv8",
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_fpv5, 
      isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, isa_bit_neon, 
      isa_nobit
    }
  },
  {
    "crypto-neon-fp-armv8",
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_fp16conv, isa_bit_crypto, 
      isa_bit_fpv5, isa_bit_vfpv2, isa_bit_vfpv3, isa_bit_vfpv4, 
      isa_bit_neon, isa_nobit
    }
  },
  {
    "vfp3",
    {
      isa_bit_fp_d32, isa_bit_fp_dbl, isa_bit_vfpv2, isa_bit_vfpv3, 
      isa_nobit
    }
  },
};
