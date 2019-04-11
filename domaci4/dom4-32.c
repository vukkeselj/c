#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int mat1 [2][2];
    int mat2 [2][2];
    int i=0;
    int j=0;
    int jednakost=0;
    srand(time(0));
    //popunjavanje prve matrice
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            mat1[i][j]= rand()%2;
            mat2[i][j]= rand()%2;
            if (mat1[i][j]==mat2[i][j])
            {
                jednakost++;
            }
        }
    }
    if (jednakost ==4)
    {
        printf("Jednaki su\n");
    }
    else
    {
        printf("Nisu jednaki\n");
    }
    
    return 0;
}




















