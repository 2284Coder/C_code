#include<stdio.h>
menu()
{
	printf("***********��ѡ��***************\n");
	printf("***1.�ӷ�      2.����***********\n");
	printf("***3.�˷�      4.����***********\n");
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
	printf("������������������");
	scanf("%d%D",&x,&y);
	printf("%d\n",pf(x,y)) ;
 } 
	
	 main()
	 {
	 	int input =0;
	 	do
	 	{
	 		menu();
	 		printf("��ѡ��");
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
			 		printf("�˳�");
					 break;
					 default :
					 printf("ѡ�����");
					 break; 
			 	
			  } 
			  
		 }
		 while(input);
	 }
