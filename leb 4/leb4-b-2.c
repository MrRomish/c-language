#include <stdio.h>

int main()
{
	float rs,pr,time,si;
	printf("rupes:");
	scanf("%f",&rs);
	printf("percentage:");
	scanf("%f",&pr);
	printf("time:");
	scanf("%f",&time);
	si=((rs*pr*time)/100);
	printf("simple interst:%f",si);
	return 0;
}
