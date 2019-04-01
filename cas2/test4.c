#include <stdio.h>

//program trazi da se unese broj od 1 do 10, a ako korisnik to ne uradi, pita ga ponovo sve dok ne ubode broj od 1 do 10. nakon toga ispisuje taj broj

int main()
{

    int x = 0;
    
    do 
    {
    printf("Unesite broj od 1 do 10: ");
    scanf("%d", &x);
    } 
    while (!(x>0 && x<10));
    
    printf("broj %d \n", x);
    return 0;
}

















