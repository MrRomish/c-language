#include<stdio.h>
int main()
{
	int day,week,month,yr;
	printf("enter a day:");
	scanf("%d",&day);
	yr=day/365;
	month=(day%365)/30;
	week=((day%365)-(month*30))/7;
	day=(day-(yr*365)-(month*30)-(week*7));

	printf("year:%d\n",yr);
	printf("month:%d\n",month);
	printf("week:%d\n",week);
	printf("day:%d\n",day);
	return 0;	
}
