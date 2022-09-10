#include<stdio.h>
#include<assert.h>
char* my_strncpy(char* dest,const char* src,int count)
{
	assert(dest&&src);
	char* ret=dest;
	while(count&&(*dest++=*src++))
	{
		count--;
	}
	return ret;
}
int main()
{
	char str1[10]="abcdefgh";
	char str2[]="bit";
	int k=4;
	my_strncpy(str1,str2,k);
	printf("%s",str1);
	return 0;
 } 
