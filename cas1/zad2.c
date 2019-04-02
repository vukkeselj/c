#include<stdio.h>

int main()
{
	int x = 1;
	printf("unesi x i y: ");
	scanf("%d,%d", &x,&y);
	int y = 2;
	printf("unesi y: ");
	scanf("%d", &y);
	float z;
	if (y == 0)
	{
        printf("make sure to provide non-zero values\n");
	}
	else
	{
		printf ("x podeljeno sa y je = %f\n", (double)x/y);
	}
	return 0;
}

