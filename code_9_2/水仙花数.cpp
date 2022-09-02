#include<stdio.h>
#include<math.h>
main()
{
	int i=0;
	for(i=0;i<=100000;i++)
	{
		int n=1;
		int sum=0;
		int temp=i;
		while(temp/=10)
		{
			n++;
		}
		temp=i;
		while(temp)
		{
			sum=sum+pow(temp%10,n);
			temp=temp/10;
		}
		if(i==sum)
		{
			printf("%d ",i);
		}
		
	}

}
