#include <stdlib.h>
#include <stdio.h>
#include "list.h"

list_node *pNewList = NULL;

void print(const list_node *pList)
{
    printf("list_node=%d ",*(INT32*)(pList->pData));
}

int main()
{
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        list_add(&pNewList, &i);
    }

    list_for_each(pNewList,print);

    return 0;
}

INT32 list_add(list_node **pList, void *pData)
{
    list_node *pCurrent = *pList;

    while(pCurrent = *pList && )
    {
        pCurrent = ((*pList)->pNext);

    }


}









