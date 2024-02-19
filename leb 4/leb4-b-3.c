#include <stdio.h>

int main()
{
	int f,c;
	printf("fahrenheit:");
	scanf("%d",&f);
	c=(((f-32)*5)/9);
	printf("celsius:%d",c);
	return 0;
}
