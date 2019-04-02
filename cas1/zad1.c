#include <stdio.h>

int main()
{
	int stranica_a = 10;
	printf("unesi stranicu a: ");
	scanf("%d", &stranica_a);
	int povrsina = stranica_a * stranica_a;
	
	printf("povrsina: %d\n", povrsina);


	return 0;
}
