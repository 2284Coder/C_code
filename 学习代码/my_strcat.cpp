#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest,const char* src)
{
	assert(dest&&src);
	char* ret=dest;
	while(*dest!='\0')
	{
		dest++;
	}
	while(*dest++=*src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30]="hello ";//�ַ���������\0���� 
	char arr2[]="world";//����׷���Լ� 
	my_strcpy(arr1,arr2);
	printf("%s",arr1);
	return 0;
}
