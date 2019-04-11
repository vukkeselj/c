#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int mat1 [2][2];
    int mat2 [2][2];
    int i=0;
    int j=0;
    int sum1=0;
    int sum2=0;
    srand(time(0));
    //popunjavanje prve matrice
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            mat1[i][j]= rand()%2;
            printf("%d\n", mat1[i][j]);
        }
    }
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            sum1 += mat1[i][j];
        }
    }
    printf("prva matrica: %d\n", sum1);
    //popunjavanje druge matrice
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            mat2[i][j]= rand()%2;
            printf("%d\n", mat2[i][j]);
        }
    }
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            sum2 += mat2[i][j];
        }
    }
    printf("druga matrica: %d\n", sum2);
    //poredjenje dve matrice
    if(sum1==sum2)
    {
        printf("Matrice su jednake\n");
    }
    else
    {
        printf("Matice nisu jednake\n");
    }

    return 0;
}




















