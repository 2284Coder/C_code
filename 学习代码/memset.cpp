#include<string.h>
#include<stdio.h>
int main()
{
	char arr[10]={0};
	memset(arr,'#',10);
	printf("%s ",arr);
	//int arr[2]={0};//������ 
	//memset(arr,1,2);
	//printf("%d",arr);
	return 0 ;
}
