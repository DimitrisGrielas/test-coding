#include <stdio.h>
#include <stdlib.h>
#include "StackInterface.h"

struct StackNodeTag 
{
    int Item;
    struct StackNodeTag *Link;
 };

struct StackPtr 
{
    ItemType Count;
     StackTag *ItemList;
 };

void stacksort(Stack *St1)            // St1 is the pointer to the address of the head pointer of the Stack
{                                    // that neads sorting (this function requires for the veriable count to have been calculated earlier int the client program).
    StackNode *tmpStack;             // here we use malloc to acquire the neaded memory from the head.
    StackNode *temp1, *temp2;
    temp1 = St1->ItemList;
    ItemType tmpItem = temp1->Item;
    temp2 = (StackNode *)malloc(sizeof(StackNode));
    tmpStack = temp2;
    tmpStack->Item = tmpItem;
    tmpStack->Link = NULL;
    St1->Count--;
    St1->ItemList = St1->ItemList->Link; 
    free(temp1);
    temp1 = St1->ItemList;
    temp2 = NULL;

    while(St1->Count != 0)
    {
        tmpItem = temp1->Item;
        St1->Count--;
        St1->Itemlist = St1->ItemList->Link;
        free(temp1);
        temp1 = St1->ItemList;
        if(tmpItem >= tmpStack->Item)
        {
            temp2 = (StackNode *)malloc(sizeof(StackNode));
            temp2->Item = tmpItem;
            temp2->Link = tmpStack;
            temp2 = NULL;
        }
        else
        {
            temp1 = NULL;
            temp1 = (StackNode *)malloc(sizeof(StackNode));
            temp1->Item = temp2->Item;
            temp1->Link = St1->ItemList;
            St1->ItemList = temp1;
            St1->Count++;
            tmpStack = tmpStack->Link;
            free(temp2);
            temp2 = tmpStack;
        }
    }

}
