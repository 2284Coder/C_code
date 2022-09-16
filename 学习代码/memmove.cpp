#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="abcdefg";
	memmove(arr1,arr1+2,3);
	puts(arr1);
	return 0;
}
