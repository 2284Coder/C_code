#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void menu()
{
	printf("**********************************************************\n");
	printf("*********1.addtion                 2.delete      *********\n");
	printf("*********3.search                  4.modification*********\n");
	printf("*********5.show                    6.sort        *********\n");
	printf("*********             0.exit                     *********\n");
	printf("**********************************************************\n");
}

int main()
{
	struct contact con;
	Initcontact(&con);
	int input=0;
	do
	{
		menu();
		printf("������Ҫѡ��Ĺ���: \n");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			addcontact(&con);
			break;
		case dele:
			delecontact(&con);
			break;
		case search:
			searchcontact(&con);
			break;
		case modifi:
			modificontact(&con);
			break;
		case show:
			showcontact(&con);
			break;
		case sort:
			sortcontact(&con);
			break;
		case exit1:
			printf("�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;

		}
	} while (input);
	return 0;
}
