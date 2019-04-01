#include <stdio.h>
#include <string.h>
#define STR_MAX 10

int main()
{
    char duza[STR_MAX];
    char kraca[STR_MAX];
    printf("unesi duzu rec: ");
    fgets(duza, STR_MAX, stdin);
    printf("unesi kracu rec: ");
    fgets(kraca, STR_MAX, stdin);
    int i=0;
    int j=0;
    
    while (kraca[i] !=10)
    {
        if (kraca[j]==duza[i])
        {
            printf("sadrzi\n");
            break;
        }
        i++;
    }
    
    
      
    

    return 0;
}
