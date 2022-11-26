#include "get_version.h" // IWYU pragma: associated

#if (defined(_WIN32) || defined(MINGW)) && !defined(GIT_VERSION) && !defined(CROSS_LINUX) && !defined(_MSC_VER)

#ifndef VERSION
#define VERSION "0.F"
#endif

#else

#include "version.h"

#endif

const char *getVersionString()
{
    return "0.F-3-web-1";
}
