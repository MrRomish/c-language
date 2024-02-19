#include <stdio.h>

int main()
{ 
    int a,b,c,avg;
	printf("first number:");
	scanf("%d",&a);
	printf("second number:");
	scanf("%d",&b);
	printf("third number:");
	scanf("%d",&c);
	avg=((a+b+c)/3);
	printf("average:%d",avg);
	return 0;
}
