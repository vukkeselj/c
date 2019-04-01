#include <stdio.h>

float obim_kruga(float poluprecnik, float pi)
{
    return 2*poluprecnik*pi;
}

float povrsina_kruga(float poluprecnik, float pi)
{
    return poluprecnik*poluprecnik*pi;
}

int main()
{
    float pi = 3.14;
    float pp= 0;
    scanf("%f",&pp);

    float x = obim_kruga(pp, pi);
    printf("%.2f\n", x);
    
    float y = povrsina_kruga(pp, pi);
    printf("%.2f\n", y);
    
    return 0;
}




