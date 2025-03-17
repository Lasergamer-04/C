#include "stack.h"
#include <stdio.h>

int main()
{
    int number;
    stack_init();

    printf("how long should the stack be: ");
    scanf("%d", &number);
    
    for (int i = number; i > 0; i--)
    {
        stack_push(i);
    }

    while (stack_empty()==0)
    {
        printf("%d\n",stack_pop());
    }
    stack_clear();
    return 0;
}
