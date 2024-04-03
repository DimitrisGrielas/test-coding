#include <stdio.h>
#include <stdlib.h>
#include "StackInterface.h"

int stacksort(Stack *St1)            // St1 is the pointer to the address of the head pointer of the Stack
{                                    // that neads sorting (this function requires for the veriable count to have been calculated earlier int the client program).
    StackNode *tmpStack = (StackNode *)malloc(sizeof(StackNode)); // here we use malloc to acquire the neaded memory from the head.
    Stack temp1;
    temp1.count = St1->count;
    temp1.Itemlist = St1->ItemList;
    StackNode *temp2;
    tmpStack->Item = temp1.ItemList->Item;
    tmpStack->Link = NULL;
    temp1.count--;
    temp1.ItemList = St1->ItemList->Link; 
    temp2 = tmpStack;

    while(temp1.count != 0) {

        if(temp1.ItemList->Item > temp2->Item)
        {
            temp2->Link = (StackNode *)malloc(sizeof(StackNode));
            temp2 = temp2->Link;
            temp2->Item = temp1.ItemList->Item;
        }
    }

}
//I AM STUPID...I AM STUPID...LIKE CHARLES LECLERC IN MONACO...
//MY BRAIN IS ON FIREEE!!! OH YEAH!!!
//I AM CURRENTELY UNDER THE WATER...PLEASE HELP...