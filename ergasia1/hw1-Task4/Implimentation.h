#include <stdio.h>
#include <stdlib.h>
#include "DequeTypes.h"
#include "interface.h"

DequePtr create(void)
{
    DequePtr DQ;
    DQ = (DequePtr)malloc(sizeof(Deque *));
    DQ.Front = NULL;
    DQ.Rear = NULL;
    return DQ;
}

int SizeOf(DequePtr *DQ)
{
    int size = 0;
    if(DQ->Front == NULL; && DQ->Rear == NULL)
    {
        printf("The deque is empty\n");
    }
    else if(DQ->Front == DQ->Rear)
    {
        size = 1;
    }
    else
    {
        Deque *temp;
        temp = DQ->Front;
        while(temp != NULL)
        {
            size++;
            temp = temp->Link;
        }
    }
    return size;
}

int IsEmpty(DequePtr *DQ)
{
    if(DQ->Front == NULL && DQ->Rear == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Enqueue(DequePtr *DQ, ItemType Item)
{
    Deque *temp1, *temp2;
    temp1 = (Deque *)malloc(sizeof(Deque));
    if(!temp1) printf("Not enough memory!\n");
    temp2 = DQ->Front;
    while(temp2->Link != NULL)
    {
        temp2 = temp2->Link;
    }
    temp1->Item = Item;
    temp1->Link = NULL;
    temp2->Link = temp1;
    DQ->Rear = temp1;
}

void push(DequePtr *DQ, ItemType Item)
{
    Deque *temp;
    temp = (Deque *)malloc(sizeof(Deque));
    if(!temp) printf("Not enough memory!\n");
    temp->Item = Item;
    temp->Link = DQ->Front;
    DQ->Front = temp;
}

ItemType pop(DequePtr *DQ, ItemType Item)
{
    Deque *temp;
    Item = DQ->Front->Item;
    temp = DQ->Front;
    DQ->Front = DQ->Front->Link;
    temp->Link = NULL;
    free(temp);
}

ItemType Dequeue(DequePtr *DQ, ItemType Item)
{
    Deque *temp, *temp1;
    Item = DQ->Rear->Item;
    temp = DQ->Rear;
    while(temp1->Item != Item)
    {
        temp1 = temp1->Link;
    }
    temp1->Link = NULL;
    DQ->Rear = temp1;
    free(temp);
    return Item;
}

void Print(DequePtr *DQ)
{
    Deque *temp;
    temp = DQ->Front;
    while(temp->Link != NULL)
    {
        printf("[%d], ", temp->Item);
    }
}