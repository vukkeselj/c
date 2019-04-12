#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tanjir {
    char boja[10];
    int r;
    struct tanjir *previous;
} tanjir_t;

tanjir_t* stek_push(tanjir_t *glava, int poluprecnik, char *boja);
tanjir_t* stek_pull(tanjir_t *glava);
