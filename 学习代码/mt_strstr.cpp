#include<stdio.h>
#include<assert.h>
char* my_strstr(char* p1,char* p2)
{
	assert(p1&&p2);
	char* s1=NULL;
	char* s2=NULL;
	char* cur=(char*)p1;
	if(*p2=='\0')
	{
		return (char*)p1;
	}
	while(*cur)
	{
		s1=cur;
		s2=(char*)p2;
		while(*s1&&*s2&&!(*s1-*s2))
		{
			s1++;
			s2++;
		}
		if(*s2=='\0')
		{
			return cur;
		}
		cur++;
	}
	return 0;
}
int main()
{
 	char* p1="abbbcedf";
	char* p2="bbc";
	char* ret=my_strstr(p1,p2);
	if(ret==0)
	{
		printf("²»ÊÇ×Ó´®"); 
	 } 
	 else
	 {
	 	printf("%s",ret);
	 }
	 return 0;
 } 
