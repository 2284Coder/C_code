#include<stdio.h>
int count_bit_one(int n)
{
	int count=0;
	int i=0;
	for(i=0;i<32;i++)
	{
	   if((n>>i)&1==1)
	   {
	   	count++;
	   }
	}
	return count;
}
main()
{
	int a=0;
	scanf("%d",&a);
	//дһ��������a�Ķ����ƣ����룩��1�ĸ���	
	int count=count_bit_one(a);
	printf("%d",count) ;
 } 
