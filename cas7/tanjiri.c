#include "tanjiri.h"

tanjir_t* stek_push(tanjir_t *glava, int poluprecnik, char *boja)
{
    tanjir_t *temp;

    temp = (tanjir_t*) malloc (sizeof(tanjir_t));
    (*temp).previous = glava;
    glava = temp;     
    
    (*glava).r = rand()%10 + 1;
    strcpy((*glava).boja, "plava\0");
    
    printf("Boja tanjira: %s, r: %d\n", (*glava).boja, (*glava).r);
    
    return glava;
}

tanjir_t* stek_pull(tanjir_t *glava)
{
    tanjir_t *temp;
    
    temp = glava;
    glava = (*glava).previous;       
    
    printf("Boja tanjira: %s, r: %d\n", (*temp).boja, (*temp).r);
    free(temp);
    
    return glava;
}
