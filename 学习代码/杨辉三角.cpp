#include<stdio.h>
#define n 10
int main()
{
	int arr[n][n]={0};
	int i=0;
	int j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			arr[i][0]=1;
			if(i==j)
			{
				arr[i][j]=1;
			}
			if(i>=2&&j>=1)
			{
				arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
			}
				printf("%d ",arr[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
