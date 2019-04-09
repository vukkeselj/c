#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matrica [5][5];
    srand(time(0));
    int i=0;
    int j=0;
    
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            matrica[i][j]=rand()%5;
            printf("%d \t", matrica[i][j]);
        }
        printf("\n");
    }




    return 0;
}
