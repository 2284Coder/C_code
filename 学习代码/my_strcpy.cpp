#include<stdio.h>
#include<string.h>
#include<assert.h> 
char* my_strcpy(char*dest,const char*src)
{
	assert(dest);
	assert(src);
	char* ret=dest;
	while(*dest++=*src++)//会将原字符串的\0拷贝到目标空间 
	{
		;
	}
	return dest;
}
int main()
{
	char arr1[]="abcdef";//字符串必须包含\0,目的地址空间必须足够大，能存放拷贝的字符串 
	char arr2[]="bit";//目标空间必须可变 
	my_strcpy(arr1,arr2);
	printf("%s",arr1);
	return 0;
 } 
