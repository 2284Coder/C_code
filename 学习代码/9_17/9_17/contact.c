#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void Initcontact(struct contact* con)
{
	con->data = (struct peopleinform*)malloc(DEFAULT_SZ * sizeof(struct peopleinform));
	if (con->data == NULL)
	{
		return;
	}
	con->size = 0;
	con->capacity = DEFAULT_SZ;
}

void checkcapacity(struct contact* con)
{
	if (con->size == con->capacity)
	{
		struct peopleinform* ptr = (struct peopleinform*)realloc(con->data, (con->capacity + 2) * sizeof(struct peopleinform));
		if (ptr != NULL)
		{
			printf("���ݳɹ�\n");
			con->capacity += 2;
		}
		else
		{
			printf("����ʧ��\n");
		}
		
	}
}
void addcontact(struct contact* con)
{
	    checkcapacity(con);
	
		printf("������������\n");
		scanf("%s", con->data[con->size].name);
		printf("���������䣺\n");
		scanf("%d", &(con->data[con->size].age));
		printf("������绰��\n");
		scanf("%s", con->data[con->size].tele);
		printf("�������Ա�\n");
		scanf("%s", con->data[con->size].sex);
		printf("�������ַ��\n");
		scanf("%s", con->data[con->size].addr);
		con->size++;
		printf("��ӳɹ�\n");
	
}

void showcontact(const struct contact* con)
{
	if (con->size == 0)
	{
		printf("ͨѶ¼û����Ϣ\n");
	}
	else
	{
		int i = 0;
		printf("%-14s\t%-6s\t%-14s\t%-4s\t%-20s\n", "����", "����", "�绰", "�Ա�", "��ַ");
		for (i = 0; i < con->size; i++)
		{
			printf("%-14s\t%-6d\t%-14s\t%-4s\t%-20s\n",
				con->data[i].name,
				con->data[i].age,
				con->data[i].tele,
				con->data[i].sex,
				con->data[i].addr);
		}
	}

}

static int Findbyname(const struct contact* con, char name[max_name])
{
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		if (strcmp(con->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void delecontact(struct contact* con)
{
	char name[max_name];
	printf("������Ҫɾ���˵�����: \n");
	scanf("%s", &name);
	int ps = Findbyname(con, name);
	if (ps == -1)
	{
		printf("ɾ���Ĳ�����\n");
	}
	else
	{
		int j = 0;
		for (j = ps; j < con->size - 1; j++)
		{
			con->data[j] = con->data[j + 1];
		}
		con->size--;
		printf("ɾ���ɹ�\n");
	}
}

void searchcontact(const struct contact* con)
{
	char name[max_name];
	printf("������Ҫ�����˵�����\n");
	scanf("%s", &name);
	int ps = Findbyname(con, name);
	if (ps == -1)
	{
		printf("���ҵĲ�����\n");
	}
	else
	{
		int i = 0;
		printf("%-14s\t%-6s\t%-14s\t%-4s\t%-20s\n", "����", "����", "�绰", "�Ա�", "��ַ");
		for (i = 0; i < con->size; i++)
		{
			printf("%-14s\t%-6d\t%-14s\t%-4s\t%-20s\n",
				con->data[ps].name,
				con->data[ps].age,
				con->data[ps].tele,
				con->data[ps].sex,
				con->data[ps].addr);
		}
	}
}

void modificontact(struct contact* con)
{
	char name[max_name];
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s", &name);
	int ps = Findbyname(con, name);
	if (ps == -1)
	{
		printf("�޸ĵĲ�����\n");
	}
	else
	{
		printf("������������\n");
		scanf("%s", con->data[ps].name);
		printf("���������䣺\n");
		scanf("%d", &(con->data[ps].age));
		printf("������绰��\n");
		scanf("%s", con->data[ps].tele);
		printf("�������Ա�\n");
		scanf("%s", con->data[ps].sex);
		printf("�������ַ��\n");
		scanf("%s", con->data[ps].addr);
		printf("�޸ĳɹ�\n");
	}
}


static void Print(struct contact* con)
{
	if (con->size == 0)
	{
		printf("û��Ҫ���������\n");
	}
	else
	{
		int i = 0;
		printf("%-14s\t%-6s\t%-14s\t%-4s\t%-20s\n", "����", "����", "�绰", "�Ա�", "��ַ");
		for (i = 0; i < con->size; i++)
		{
			printf("%-14s\t%-6d\t%-14s\t%-4s\t%-20s\n",
				con->data[i].name,
				con->data[i].age,
				con->data[i].tele,
				con->data[i].sex,
				con->data[i].addr);
		}
	}
}

//��ͨѶ¼�е���Ϣ��������
//������
//1.����������������
int Conpare_ByName(const void* e1, const void* e2)
{
	return strcmp(((struct peopleinform*)e1)->name, ((struct peopleinform*)e2)->name);
}
//2.���������������
int Conpare_ByAge(const void* e1, const void* e2)
{
	return ((struct peopleinform*)e1)->age - ((struct peopleinform*)e2)->age;
}
//3.����סַ��������
int Conpare_ByAddress(const void* e1, const void* e2)
{
	return strcmp(((struct peopleinform*)e1)->name, ((struct peopleinform*)e2)->name);
}
void sortcontact(struct contact* con)
{
	printf("��ѡ����������ķ�ʽ��\n");
	printf("1.����\n2.����\n3.סַ\n");
	int input = 0;
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		qsort(con->data, con->size, sizeof(con->data[0]), Conpare_ByName);
		Print(con);
		printf("����ɹ�\n");
		break;
	case 2:
		qsort(con->data, con->size, sizeof(con->data[0]), Conpare_ByAge);
		printf("����ɹ�\n");
		break;
	case 3:
		qsort(con->data, con->size, sizeof(con->data[0]), Conpare_ByAddress);
		printf("����ɹ�\n");
		break;
	}
}
