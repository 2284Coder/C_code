//模拟实现qsort
#include<stdio.h>
#include<string.h>
//struct Stu
//{
//	char name[10];
//	int age;
//};
//void test()
//{
//	struct Stu s[3]={{"张三",20},{"李四",10},{"王五",30}};
//	int sz=sizeof(s)/sizeof(s[0]);
//	bubble_sort(s,sz,sizeof(s[0]),cmp_by_name);
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%s ",s[i].name);
//	}
//}
//int cmp_by_name( void*e1, void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
void Swap(char* buf1,char* buf2,int width)
{
	int i=0;
	for(i=0;i<width;i++)
	{
		char temp=*buf1;
		*buf1=*buf2;
		*buf2=temp;
		buf1++;
		buf2++;
	}
}
int cmp_int( void*e1, void* e2)
{
	return *(int*)e1-*(int*)e2;
}

void bubble_sort(void* base,int sz,int width,int(*cmp)(void*e1,void*e2))
{
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}


void test1()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	//test();
	test1();
	return 0;
}
 
