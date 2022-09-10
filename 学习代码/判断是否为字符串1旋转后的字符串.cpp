#include<stdio.h>
#include<string.h>
int move(char* arr1,char* arr2)
{
	int len1=strlen(arr1);
	int len2=strlen(arr2);
	if(len1!=len2)
	{
		return 0;
	}
	strncat(arr1,arr1,6);
	char* ret=strstr(arr1,arr2);
	if(ret==NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[]={"abcdef"};
	char arr2[]={"cdefab"};
	int len1=strlen(arr1);
	int len2=strlen(arr2);
	printf("%d",len1);
	printf("%d",len2);
	int ret=move(arr1,arr2);
	if(ret==1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
 } 
