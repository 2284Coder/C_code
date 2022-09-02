#include<stdio.h>
menu()
{
	printf("***********请选择***************\n");
	printf("***1.加法      2.减法***********\n");
	printf("***3.乘法      4.除法***********\n");
}
int Add(int x,int y)
 {
 	return x+y;
 }
 int Sub(int x,int y)
 {
 	return x-y;
 }
 int Mul(int x,int y)
 {
 	return x*y;
 }
 int Div(int x,int y)
{
	return x/y;
}
int Xro(int x,int y)
{
	return x%y;
}
void Calc(int(*pf)(int,int))
{
	int x=0;
	int y=0;
	printf("请输入两个操作数：");
	scanf("%d%D",&x,&y);
	printf("%d\n",pf(x,y)) ;
 } 
	
	 main()
	 {
	 	int input =0;
	 	do
	 	{
	 		menu();
	 		printf("请选择：");
			 scanf("%d",&input);
			 switch(input)
			 {
			 	case 1:
				 Calc(Add);
			 	break;
			 	case 2:
				 Calc(Sub);
			 	break;
			 	case 3:
				 Calc(Mul);
			 	break;
			 	case 4:
				 Calc(Div);
			 	break;
			 	case 5:
				 Calc(Xro);
			 	break;
			 	case 0:
			 		printf("退出");
					 break;
					 default :
					 printf("选择错误");
					 break; 
			 	
			  } 
			  
		 }
		 while(input);
	 }
