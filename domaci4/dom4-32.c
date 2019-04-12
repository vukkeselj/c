#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "matrice.h"

int main()
{
    int mat1 [ROW][COL];
    int mat2 [ROW][COL];
    int i=0;
    int j=0;
    int jednakost=0;
    srand(time(0));
    //popunjavanje prve matrice
    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            mat1[i][j]= rand()%2;
            mat2[i][j]= rand()%2;
            if (mat1[i][j]==mat2[i][j])
            {
                jednakost++;
            }
        }
    }
    ispisi_matricu(mat1);
    ispisi_matricu(mat2);
    if (jednakost == ROW*COL)
    {
        printf("Jednaki su\n");
    }
    else
    {
        printf("Nisu jednaki\n");
    }
    
    return 0;
}




















