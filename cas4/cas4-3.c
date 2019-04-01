#include <stdio.h>

void obim_kruga(float poluprecnik, float pi, float *obim)
{
    *obim = 2*poluprecnik*pi;
}

float povrsina_kruga(float poluprecnik, float pi, float *povrsina)
{
    *povrsina=poluprecnik*poluprecnik*pi;
}


int main()
{
    float pie = 3.14;
    float pp= 0;
    float c=0;
    scanf("%f",&pp);

    obim_kruga (pp,pie,&c);
    printf("%.2f\n", c);
    
    povrsina_kruga (pp,pie,&c);
    printf("%.2f\n", c);
    
    return 0;
}




