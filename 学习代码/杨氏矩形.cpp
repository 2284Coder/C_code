#include<stdio.h>
int FindNum(int arr[3][3],int k,int *pi,int *pj)
{
	int i=0;
	int j=*pj-1;
	while(i<=*pi-1&&j>=0)
	{
		if(arr[i][j]<k)
		{
			i++;
		}
		else if(arr[i][j]>k)
		{
			j--;
		}
		else
		{
			*pi=i;
			*pj=j;
			return 1;
		}
	}
		return 0;
}
int main()
{
	int i=3,j=3;
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int k=7;
	int ret=FindNum(arr,k,&i,&j);
	if(ret==1)
	{
		printf("YES\n");
		printf("ÏÂ±êÊÇ£º%d %d",i,j);
	 } 
	 else
	 {
	 	printf("NO");
	 }
	 return 0;
	
 } 
