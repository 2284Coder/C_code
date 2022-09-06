#include<stdio.h>
int main()
{
	int total=0;
	int empty=0;
	int money=0;
	scanf("%d",&money);
	total=money;
	empty=money;
	while(empty>=2)
	{
		total=total+empty/2;
		empty=empty/2+empty%2;
	}
	printf("%d",total);
}
