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





#endif
