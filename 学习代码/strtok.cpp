#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="129@qq.com";
	char* p="@.";
	char*ret=NULL;
	for(ret=strtok(arr,p);ret!=NULL;ret=strtok(NULL,p))
	{
		printf("%s\n",ret);
	}
	return 0;
	
	
 } 
