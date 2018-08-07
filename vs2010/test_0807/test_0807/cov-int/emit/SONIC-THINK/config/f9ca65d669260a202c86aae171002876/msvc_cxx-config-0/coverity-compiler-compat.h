﻿
#if !defined(COVERITY_COMPAT_44acf5a51af868dac7da50b774b737d1)
#define COVERITY_COMPAT_44acf5a51af868dac7da50b774b737d1
#pragma builtin begin

/*
  Copyright (c) 2017 Synopsys, Inc. All rights reserved worldwide.
  The information contained in this file is the proprietary and confidential
  information of Synopsys, Inc. and its licensors, and is supplied subject to,
  and may be used only by Synopsys customers in accordance with the terms and
  conditions of a previously executed license agreement between Synopsys and
  that customer.
*/


/* DO NOT MODIFY THE CONTENTS OF THIS FILE */

#define _export

class type_info;

// BZ 50631
typedef struct _PMD
{
    int mdisp;
    int pdisp;
    int vdisp;
} _PMD;

#if defined(_MSC_FULL_VER) && _MSC_FULL_VER >= 190023506
extern float __builtin_huge_valf();
extern float __builtin_nanf(const char*);
extern float __builtin_nansf(const char*);
extern double __builtin_huge_val();
extern double __builtin_nan(const char*);
extern double __builtin_nans(const char*);
#endif

#if defined (_DEBUG) && defined(_CRTDBG_MAP_ALLOC)
#nodef malloc
#nodef calloc
#nodef realloc
#nodef free
#nodef _malloca
#nodef _strdup
#nodef _wcsdup
#nodef _mbsdup
#nodef _wtempnam
#nodef _fullpath
#nodef _wfullpath
#nodef _wgetcwd
#nodef _wgetdcwd
#endif

#nodef getchar

#pragma builtin end
#endif /* COVERITY_COMPAT_44acf5a51af868dac7da50b774b737d1 */
