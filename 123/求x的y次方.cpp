//Pow(int x,int y);��x��y���ݣ�xΪ����,yΪָ��
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
 
