#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct S
{
	int i;
	int *arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = (int*)malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	
	free(ps->arr);
	ps->arr=NULL;
	free(ps);
	ps = NULL;
	printf("%d", sizeof(struct S));  //8B,指针大小为4/8
	printf("%d", sizeof(ps->arr));  //4,
	return 0;
}