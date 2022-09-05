#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* arr)
{
	assert(arr);
	int len=strlen(arr);
	char* left=arr;
	char* right=arr+len-1;
	while(left<right)
	{
		char temp=*left;
		*left=*right;
		*right=temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[]={0};
	//scanf("%s",&arr);
	gets(arr);
	reverse(arr);
	printf("%s",arr);
}
