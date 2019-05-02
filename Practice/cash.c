#include <stdio.h>
#include <math.h>

int main()
{
    float kusur = 0;
        
    do  
    {  
        printf("Unesite kusur: \n");
        scanf("%f", &kusur);
        printf("Kusur je %f \n", kusur);
    }
    while (kusur<=0);

    int cents = (kusur*100);
    printf("kusur u centima: %d \n", cents);
    
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    
    int coins = 0;
    int i = 0;
    while (cents>=quarter)
    {
        cents=cents - quarter;
        coins++;
    }
        
    while (cents>=dime)
    {    
        cents=cents - dime;
        coins++;
    }
    
    while (cents>=nickel)
    {
        cents=cents - nickel;
        coins++;
    }
    
    while (cents>=penny)
    {   
        cents=cents - penny;
        coins++;
    }
    
    printf("Broj novcica je: %d\n", coins);
    

    return 0;
}
