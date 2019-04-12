#ifndef MATRICE_C_INCLUDED
#define MATRICE_C_INCLUDED

#include <stdio.h>
#include "matrice.h"

void ispisi_matricu(int mat[][COL])
{
    int i=0;
    int j=0;
    
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

#endif
