#include <stdio.h>
#include <stdlib.h>
#include "StackInterface.h"

int stacksort(Stack *St1)            // St1 is the pointer to the address of the head pointer of the Stack
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
        if(St1->Itemlist->Item >= tmpStack->Item)
        {
            temp2 = (StackNode *)malloc(sizeof(StackNode));
            tmpItem = temp1->Item;
            temp2->Item = tmpItem;
            temp2->Link = impStack;
            temp2 = NULL;
            St1->Count--;
            St1->Itemlist = St1->ItemList->Link;
            free(temp1);
            temp1 = St1->ItemList;
        }
        else
        {
            temp1 = (StackNode *)malloc(sizeof(StackNode));
            
        }
    }

}
//I AM STUPID...I AM STUPID...LIKE CHARLES LECLERC IN MONACO...
//MY BRAIN IS ON FIREEE!!! OH YEAH!!!
//I AM CURRENTELY UNDER THE WATER...PLEASE HELP...
//I AM A HIGH PERFORMANCE ATHETE, ATHETE SWEAT, SWEAT BABY, KE KE KE, RHAA, SWEAT SWEAT, OUH OUH -Daniel Ricciardo.
//Oh no you ruined my icecream!!! -Lando Norris.
//I am a smoooth operator!!! Smoooth operator!!! -Carlso Sainz.
//I am the bad guy -Fernando Alonso.
//I am stupid...I am stupid -Charles Leclerc.