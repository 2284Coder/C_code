#include<stdio.h>
#include<stdlib.h>//rand���������
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
	 	printf("�������");
		 scanf("%d",&guess);
		  if(guess>ret)
		{
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else 
		{
			printf("�¶��ˣ���ϲ�㣡\n");
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
 		printf("��ѡ��");
		 scanf("%d",&input);
		 switch(input)
		 {
		 case 1:game(); break; 
		 case 0:break;
		 default:printf("ѡ�����\n");break;
		 }
	 }
	 while(input);
	 return 0;
 }
