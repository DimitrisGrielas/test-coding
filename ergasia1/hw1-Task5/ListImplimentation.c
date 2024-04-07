#include <stdio.h>
#include <stdlib.h>
#include "ListTypes.h"

ListPtr Create(void)
{
    ListPtr L;
    L = (ListPtr)malloc(sizeof(List));
    L.Lptr = NULL;
    return L;
}

void Add(ListPtr *L, ItemType Item)
{
    List *temp;
    temp = (List *)malloc(sizeof(List));
    temp->Item = Item;
    temp->Link = temp;
    L->Lptr = temp;
}

ItemType Remove(ListPtr *L, ItemType Item)
{
    List *temp, *temp1;
    int i;
    if(L->Lptr == NULL)
    {
        printf("List is empty!\n");
    }
    else if(L->Lptr->Link == NULL)
    {
        temp = L->Lptr;
        Item = temp->Item;
        L->Lptr = NULL;
        free(temp);
        return Item;
    }
    else
    {
        temp1 = L->Lptr;
        for(i = 0; i < 2; i++)
        {
            temp1 = temp1->Link;
        }
        temp = L->Lptr->Link;
        Item = temp->Item;
        L->Lptr->Link = temp1;
        temp->Link = NULL;
        free(temp);
        return Item;
    }
}

void Advance(ListPtr *L)
{
    L->Lptr = L->Lptr->Link;
}