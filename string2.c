#include <stdio.h>

int main()
{

    char rec1[100];
    char rec2[100];
    gets (rec1);
    gets (rec2);
    int i=0;
    int indikator_jednakosti=1;
    
    //printf("%c \n", rec1[0]);
    
    
    while (rec1[i] != 0)
    {
        
        if (rec1[i]==rec2[i])
        {
            indikator_jednakosti = 0;
            
            break;
        }
        i++;
    }
    
    if (indikator_jednakosti==1)
    {
        printf("isti su \n");
    }      
    else 
    {
        printf("razliciti su \n");
    }
     
    return 0;
}
