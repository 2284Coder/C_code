//strerror(0)
#include<stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
	FILE* pf=fopen("test.txt","r");
	if(pf==NULL)
	{
		printf("%s\n",strerror(errno));	
	}	
	else
	{
		printf("open file success\n");
	}
	return 0;
}
