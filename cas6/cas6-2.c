//struktura krug, ima poluprecnik i obim i povrsina

#include <stdio.h>
#include <stdlib.h>
typedef struct krug_str
{
    int poluprecnik;
    double obim;
    double povrsina;
} krug;




int main()
{   
    krug niz[5];
    int i=0;
    
    for (i=0;i<5;i++)
    {
        niz[i].poluprecnik = rand() %10;
        niz[i].obim = niz[i].poluprecnik*2*3.14;
        niz[i].povrsina = niz[i].poluprecnik*niz[i].poluprecnik*3.14;
        
        
    }
    
    
    return 0;
}
