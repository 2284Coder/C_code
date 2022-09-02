//Pow(int x,int y);求x的y次幂，x为底数,y为指数
#include<stdio.h>
int Pow(int x,int y)
{
	if(y<0)
	{
		return (1.0/Pow(x,-y));
	}
	else if(y==0)
	{
		return 1;
	}
	else
	{
		return x*Pow(x,y-1);
	}
}
main()
{
	int x=0;
	int y=0;
	scanf("%d%d",&x,&y);
	int ret=Pow(x,y);
	printf("%d\n",ret);
	return 0;
}
 
