#ifndef __TYPES_H
#define __TYPES_H

#include <stdio.h>




typedef int INT32;
typedef char CHAR;
typedef void VOID;

#ifndef DBUG
#define DBUG(format,...) \
    printf(format, ##__VA_ARGS__)
#endif

#define EXEC(exp)\
    if (!exp){\
    DBUG("error! %s : line: %d\n",__FUNC__, __LINE__);\
    goto end; \
    }
#define END end:\
    return 0;






#endif
