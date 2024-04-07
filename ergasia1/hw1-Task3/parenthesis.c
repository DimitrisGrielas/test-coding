#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parenthesis.h"
#include "StackTypes.h"

char * Input(void)
{
    printf("Please enter mathematical statement: ");

    char c;
    char * input = (char *)malloc(sizeof(char) * 100);

    if(!input)
    {
        printf("ERROR! -> parenthesis.c -> function Input -> malloc failed!!!\n");
    }

    int i = 0;

    while ((c = getchar()) != '\n')
    {
        input[i] = c;
        i++;
    }

    return input;
}

void test_Input(char * test)
{
    int i = 0;
    printf("Char statement: \t");
    while(test[i] != '\0')
    {
        printf("%c", test[i]);
    }
    printf("\n");
}

StackPtr parenthesis(char *statement)
{
    StackPtr St1, St2;
    St1 = initialize();
    St2 = initialize();
    int i = 0;

    while(statement[i] != '\0')
    {
        ItemType inf;

        if(statement[i] != ')')
        {
            push(&St1, statement[i]);           
        } 
        else
        {
            push(&St2, ')');
            while(St1.STptr != NULL)
            {
                inf = pop(&St1);
                push(&St2, inf);
            }
            push(&St1, '(');

            while(St2.STptr != NULL)
            {
                inf = pop(&St2);
                push(&St1, inf);
            }
        }
        i++;
    }
    return St1;
}

StackPtr initialize(void)
{
    StackPtr *ST;
    ST->STptr = NULL;
    return *ST;
}

void push(StackPtr *ST, ItemType Item)
{   
    Stack *temp;
    temp = (Stack *)malloc(sizeof(Stack));
    temp->Item = Item;
    if(ST->STptr == NULL)
    {
        temp->Link = NULL;
        ST->STptr = temp;
    }
    else
    {
        temp->Link = ST->STptr;
        ST->STptr = temp;
    }
}

ItemType pop(StackPtr *ST)
{
    if(ST->STptr == NULL)
    {
        printf("ERROR: The stack is empty!\n");
    }
    else
    {
        ItemType inf;
        Stack *temp;
        temp = ST->STptr;
        ST->STptr = ST->STptr->Link;
        inf = temp->Item;
        temp->Link = NULL;
        free(temp);
        return inf;
    }
}