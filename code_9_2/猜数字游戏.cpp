#include<stdio.h>
#include<stdlib.h>//rand生成随机数
#include<time.h>
void menu()
{
	printf("*********************************\n");
	printf("*****   1.play    0.exit    *****\n");
	printf("*********************************\n");
 } 
 void game()
 {
 	int ret=0;
	 int guess=0;
	 ret =rand()%100+1;
	 while(1)
	 {
	 	printf("请猜数字");
		 scanf("%d",&guess);
		  if(guess>ret)
		{
			printf("猜大了\n");
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		}
		else 
		{
			printf("猜对了，恭喜你！\n");
			break;
		}
	  } 
 }
 int main()
 {
 	srand((unsigned int)time(NULL));
 	int input=0;
 	do{
 		menu();
 		printf("请选择：");
		 scanf("%d",&input);
		 switch(input)
		 {
		 case 1:game(); break; 
		 case 0:break;
		 default:printf("选择出错\n");break;
		 }
	 }
	 while(input);
	 return 0;
 }
