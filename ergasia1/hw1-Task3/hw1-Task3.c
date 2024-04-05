#include <stdio.h>
#include "parenthesis.h"

int main(void) 
{
    char * input = (char *)malloc(sizeof(char) * 100);
    input = Input();
    test_Input(input);
}