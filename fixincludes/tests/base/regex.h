/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/regex.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */



#if defined( OSF_NAMESPACE_C_CHECK )
#include <reg_types.h>
typedef __regex_t	regex_t;
typedef __regoff_t	regoff_t;
typedef __regmatch_t	regmatch_t;
#endif  /* OSF_NAMESPACE_C_CHECK */
