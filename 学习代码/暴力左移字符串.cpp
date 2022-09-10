#include<stdio.h>
#include<assert.h> 
#include<string.h>
void move(char* arr,int k)
{
	assert(arr!=NULL);
	int len=strlen(arr);
	int i=0;
	for(i=0;i<k;i++)
	{
		int temp=*arr;
		int j=0;
		for(j=0;j<len-1;j++)
		{
			*(arr+j)=*(arr+j+1);
		}
		*(arr+len-1)=temp;
		
	}
}
int main()
{
	char arr[]={"abcdef"};
	int k=2;
	move(arr,k);
	printf("%s",arr);
	return 0;
}
