#include<stdio.h> 
void menu()
{
	printf( "***********************\n");
    printf( " 1:add           2:sub \n");
    printf( " 3:mul           4:div \n");
    printf( "         0.exit        \n");
    printf( "***********************\n");
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int main()
{
	int input=0;
	int x=0;
	int y=0;
	int(*pfArr[])(int,int)={0,add,sub,mul,div};
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		if(input<=4 && input>=1)
		{
			printf("请输入两个操作数：\n");
			scanf("%d %d",&x,&y);
			int ret=pfArr[input](x,y);
			printf("%d\n",ret);
		 } 
		else if(input==0)
		 	{
		 		printf("退出\n");
			 }
		else
		 	{
		 		printf("输入错误\n"); 
			 }
	}while(input);
}
