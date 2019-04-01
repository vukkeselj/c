#include <stdio.h>

//program trazi da se unese broj n i sabira n sa svim celim brojevima izmedju n i 0

int main()
{
    int n = 0;
    printf("unesite n: \n");
    scanf("%d", &n);
    
    int i = 0;
    int j = 0;
    
    for (i=0; i<=n; i++)
    {
        j+=i;
    }
    printf("Zbir: %d \n", j);
    return 0;


}
