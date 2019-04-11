//unesi n, niz duzine n, popunis ga random brojevima, ispises i oslobodis memoriju

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{   
    int n=0;
    int *niz;
    int i = 0;
    srand(time(0));
    printf("unesite n: ");
    scanf("%d", &n);
    niz=(int*)calloc(n,sizeof(int));
    for (i=0; i<n; i++)
    {
        niz[i]=rand()%10;
        printf("%d\n", niz[i]);
    }
    free(niz);


    return 0;
}
