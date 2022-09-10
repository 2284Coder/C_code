#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)//返回类型为size_t:unsigned int,些成int减少出错 
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
	char str[]="abcdef";//字符串必须以\0结束 
	int len=my_strlen(str);
	printf("%d",len);
 } 
