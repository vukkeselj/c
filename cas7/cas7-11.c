#include <stdio.h>
#include <stdlib.h>
#include "tanjiri.h"

#define STACK_SIZE 5

int main()
{
    tanjir_t *porcelan = NULL;
    int i;
    
    for (i = 0; i < STACK_SIZE; i++)
    {
        porcelan = stek_push(porcelan, rand()%10 + 1, "plava\0");
    }
    printf("\n\n");
    for (i = 0; i < STACK_SIZE; i++)
    {
        porcelan = stek_pull(porcelan);
    }
    
    return 0;
}

