#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//使用qsort函数 
struct Stu
{
	char name[10];
	int age;	
};
/*/////////////////////////////////////////////////////////////////////////
int cmp_int(const void* e1,const void* e2)
{
	return *(int*)e1-*(int*)e2;
 } 
 void test()
 {
 	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]); 
	}
 }
 */////////////////////////////////////////////////////////////////////
 /*******************************************************************
int  cmp_float(const void* e1,const void* e2)
 {
 	return ((int)*(float*)e1-*(float*)e2);
 }
 void test1()
 {
 		float f[]={9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0};
 		int sz=sizeof(f)/sizeof(f[0]);
 		qsort(f,sz,sizeof(f[0]),cmp_float);
 		int i=0;
		for(i=0;i<sz;i++)
		{
			printf("%f ",f[i]); 
		}
 }
 *///////////////////////////////////////////////////////////////////
 /***************************************************************
 int cmp_by_age(const void*e1,const void*e2)
 {
 	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
 }
 void test2()
 {
 	struct Stu s[3]={{"张三",20},{"李四",30},{"王二",33}};
 	int sz=sizeof(s)/sizeof(s[0]);
 	qsort(s,sz,sizeof(s[0]),cmp_by_age);
 			int i=0;
		for(i=0;i<sz;i++)
		{
			printf("%d ",s[i].age); 
		}
 }
 *///////////////////////////////////////////////////////////////////
 int cmp_by_name(const void* e1,const void*e2)
 {
 	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
 }
 void test3()
 {
 	struct Stu s[3]={{"张三",20},{"李四",30},{"王二",33}};
 	int sz=sizeof(s)/sizeof(s[0]);
 	qsort(s,sz,sizeof(s[0]),cmp_by_name);
 	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%s ",s[i].name); 
	}
 }
 
int main()
{
	//test();
	//test1();
	//test2();
	test3();
	return 0;
	
 } 
