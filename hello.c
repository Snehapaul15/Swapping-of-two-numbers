#include<stdio.h>
main()
{
	int x, y;
	printf("Input the value of x and y:   \n");
	scanf("%d, %d", &x, &y);
	printf("Before swapping the value of x and y : %d %d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nAfter swapping the value of x and y: %d %d",x,y);
	return 0;
}
