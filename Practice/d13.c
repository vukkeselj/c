#include <stdio.h>

int main()
{
    int a=0;
    int b=0;
    int kolicnik=0;
    int ostatak=0;
    printf("Unesite a i b: ");
    scanf("%d %d", &a, &b);
    printf("uneli ste brojeve: %d i %d\n", a, b);
    
    do 
    {
        if (a>=b)
        {
            a = a - b;
            kolicnik++;
        }

    }
    while (a>=b);
    ostatak=a;
    printf("kolicnik je: %d\n", kolicnik);
    printf("ostatak je %d\n", ostatak);
    return 0;
}
