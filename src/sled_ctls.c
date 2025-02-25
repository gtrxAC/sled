#include "sled_contextless.h"

#ifdef _WIN32
    #include <windows.h>
#else
    #include <stdlib.h>
#endif

char *pathof(char *path, int size, char buffer[])
{
#ifdef _WIN32
    GetFullPathNameA(path, size, buffer, NULL);
    return buffer;
#else
    return realpath(path, NULL);
#endif
}

