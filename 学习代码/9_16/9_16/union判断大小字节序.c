#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int check_sys()
{
	union Un
	{
		char c;
		int a;
	}u;
	u.a = 1;
	return u.c;
}
int main()
{
	int ret = check_sys();
	if (1 == ret)
	{
		printf("Ð¡¶Ë");
	}
	else
	{
		printf("´ó¶Ë");
	}
	return 0;
}
 