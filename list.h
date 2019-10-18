#ifndef __LIST_H
#define __LIST_H
#include "types.h"


typedef struct _list_node
{
    struct list *pNext;
    void *pData;
}list_node;

typedef void(*pVoid)(const list_node*);

INT32 list_add(list_node **pList, void *pData);
INT32 list_del(list_node **pList, void *pData);
INT32 list_search(list_node *pList);
VOID list_for_each(const list_node *pList,pVoid);

#endif
