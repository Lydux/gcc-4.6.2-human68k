/* Definitions for human68k.
   Copyright (C) 2012 Free Software Foundation, Inc.
   Contributed by Lyderic Maillet (lydux86@gmail.com).

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */


/* Target OS builtins.  */
#undef TARGET_OS_CPP_BUILTINS	/* Defined in m68kemb.h.  */
#define TARGET_OS_CPP_BUILTINS()		\
  do						\
    {						\
	builtin_define_std ("mc68000");		\
	builtin_define ("human68k");		\
	builtin_define ("HUMAN68K");		\
	builtin_assert ("system=human68k");	\
    }						\
  while (0)

#undef LINK_SPEC
#define LINK_SPEC "-q"

#undef LIB_SPEC
#define LIB_SPEC "%{!nostdlib: -lc -ldos -liocs}"

#undef STARTFILE_SPEC
#define STARTFILE_SPEC "crt0.o%s"

#undef ENDFILE_SPEC
#define ENDFILE_SPEC   ""

#undef USER_LABEL_PREFIX
#define USER_LABEL_PREFIX ""

#define TARGET_IOCSCALL_DECL_ATTRIBUTE 1

