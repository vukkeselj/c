#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int zbir [2][2];
    int i=0;
    int j=0;
    int sum=0;
    srand(time(0));
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            zbir[i][j]= rand()%10;
        }
    }
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            sum += zbir[i][j];
        }
    }
    
    
    printf("%d\n", sum);



    return 0;
}
