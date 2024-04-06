#include <stdio.h>
#include "parenthesis.h"

int main(void) 
{
    StackPtr ST;
    Stack *temp;
    char * input = (char *)malloc(sizeof(char) * 100);
    input = Input();
    ST = parenthesis(input);
    temp = ST.STptr;
    while(temp != NULL)
    {
        printf("%c", temp->Item);
        temp = temp->Link;
    }
    printf("\n");
}