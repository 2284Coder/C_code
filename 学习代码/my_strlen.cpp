#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)//��������Ϊsize_t:unsigned int,Щ��int���ٳ��� 
{
	int count=0;
	assert(str);
	while(*str)
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char str[]="abcdef";//�ַ���������\0���� 
	int len=my_strlen(str);
	printf("%d",len);
 } 
