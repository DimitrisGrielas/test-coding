#include <stdio.h>
#include "ListType.h"
#include "SelectionSortInter.h"

void selectionSort(NodePtr L) 
{
    NodePtr tempI, minTmp, tempJ, tmp1, tmp2;
    tempI = L;
    int size = 0;
    while(tempI->Link != NULL)
    {
        size++;
        tempI = tempI->Link;
    }    
    tempI = L;
    tempJ = L->Link;
    int i, j; 
  
    // One by one move boundary of 
    // unsorted subarray 
    for (i = 0; i < size - 1; i++) { 
  
        // Find the minimum element in 
        // unsorted array
        minTmp = tempI; 
        tmp1 = L;
        for (j = i + 1; j < size; j++) { 
            tmp2 = L;
            if (tempJ->Item < minTmp->Item)
            {
                while(tmp2->Link != tempJ)
                {
                    tmp2 = tmp2->Link;
                }
                minTmp = tempJ;
            }
            tempJ = tempJ->Link;
        }

        while(tmp1->Link != tempI)
        {
            tmp1 = tmp1->Link;
        }
  
        // Swap the found minimum element 
        // with the first element 
        if (minTmp != tempI) 
            Swap(tmp1, tmp2, minTmp, tempI); 
        tempI = tempI->Link;
    }
}

void Swap(NodePtr Ptr1, NodePtr Ptr2, NodePtr Min, NodePtr Tmp)
{
    NodePtr temp = Min->Link;
    Ptr1->Link = Min;
    Min->Link = Tmp->Link;
    Ptr2->Link = Tmp;
    Tmp->Link = temp;
}