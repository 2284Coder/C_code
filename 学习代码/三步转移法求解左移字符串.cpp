#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* left,char* right)
{
	assert(left);
	assert(right);
	while(left<right)
	{
		char temp=*left;
		*left=*right;
		*right=temp;
		left++;
		right--;
	}
}
void move(char* arr,int k)
{
	assert(arr);
	int len=strlen(arr);
	assert(k<=len);
	reverse(arr,arr+k-1);
	reverse(arr+k,arr+len-1);
	reverse(arr,arr+len-1);
}
int main()
{
	char arr[]={"abcdef"};
	int k=2;
	move(arr,k);
	printf("%s",arr);
}
