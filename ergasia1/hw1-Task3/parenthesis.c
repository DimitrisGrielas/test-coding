#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parenthesis.h"

struct StackNode 
{
    char Item;
    struct StackNode *Link;
};

struct StackPtr
{
    struct Stack *STptr;
};

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