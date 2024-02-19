#include <stdio.h>

int main()
{
	float hight,base,area;
	printf("hight:");
	scanf("%f",&hight);
	printf("base:");
	scanf("%f",&base);
	area=((hight*base)/2);
	printf("area of triangle:%f",area);
	return 0;
}
