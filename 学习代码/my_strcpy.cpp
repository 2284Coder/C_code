#include<stdio.h>
#include<string.h>
#include<assert.h> 
char* my_strcpy(char*dest,const char*src)
{
	assert(dest);
	assert(src);
	char* ret=dest;
	while(*dest++=*src++)//�Ὣԭ�ַ�����\0������Ŀ��ռ� 
	{
		;
	}
	return dest;
}
int main()
{
	char arr1[]="abcdef";//�ַ����������\0,Ŀ�ĵ�ַ�ռ�����㹻���ܴ�ſ������ַ��� 
	char arr2[]="bit";//Ŀ��ռ����ɱ� 
	my_strcpy(arr1,arr2);
	printf("%s",arr1);
	return 0;
 } 
