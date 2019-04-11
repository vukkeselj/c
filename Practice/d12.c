#include <stdio.h>

#define NIZ_LEN 10

int main()
{   
    int prvi[NIZ_LEN];
    int drugi[NIZ_LEN];
    
    int i=0;
    int j=0;
    
    for (i=0; i<NIZ_LEN; i++)
    {
        prvi[i]=i;
        printf("prvi niz: %d\n", prvi [i]);
        
    }
    for (i = 0; i < NIZ_LEN; i++)
    {
        drugi[i] = NIZ_LEN - prvi[i] - 1;
        printf("%d\n", drugi[i]);
    }
    
    return 0;
}
