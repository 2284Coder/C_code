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
			printf("扩容成功\n");
			con->capacity += 2;
		}
		else
		{
			printf("增容失败\n");
		}
		
	}
}
void addcontact(struct contact* con)
{
	    checkcapacity(con);
	
		printf("请输入姓名：\n");
		scanf("%s", con->data[con->size].name);
		printf("请输入年龄：\n");
		scanf("%d", &(con->data[con->size].age));
		printf("请输入电话：\n");
		scanf("%s", con->data[con->size].tele);
		printf("请输入性别：\n");
		scanf("%s", con->data[con->size].sex);
		printf("请输入地址：\n");
		scanf("%s", con->data[con->size].addr);
		con->size++;
		printf("添加成功\n");
	
}

void showcontact(const struct contact* con)
{
	if (con->size == 0)
	{
		printf("通讯录没有信息\n");
	}
	else
	{
		int i = 0;
		printf("%-14s\t%-6s\t%-14s\t%-4s\t%-20s\n", "姓名", "年龄", "电话", "性别", "地址");
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
	printf("请输入要删除人的姓名: \n");
	scanf("%s", &name);
	int ps = Findbyname(con, name);
	if (ps == -1)
	{
		printf("删除的不存在\n");
	}
	else
	{
		int j = 0;
		for (j = ps; j < con->size - 1; j++)
		{
			con->data[j] = con->data[j + 1];
		}
		con->size--;
		printf("删除成功\n");
	}
}

void searchcontact(const struct contact* con)
{
	char name[max_name];
	printf("请输入要查找人的姓名\n");
	scanf("%s", &name);
	int ps = Findbyname(con, name);
	if (ps == -1)
	{
		printf("查找的不存在\n");
	}
	else
	{
		int i = 0;
		printf("%-14s\t%-6s\t%-14s\t%-4s\t%-20s\n", "姓名", "年龄", "电话", "性别", "地址");
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
	printf("请输入要修改人的姓名\n");
	scanf("%s", &name);
	int ps = Findbyname(con, name);
	if (ps == -1)
	{
		printf("修改的不存在\n");
	}
	else
	{
		printf("请输入姓名：\n");
		scanf("%s", con->data[ps].name);
		printf("请输入年龄：\n");
		scanf("%d", &(con->data[ps].age));
		printf("请输入电话：\n");
		scanf("%s", con->data[ps].tele);
		printf("请输入性别：\n");
		scanf("%s", con->data[ps].sex);
		printf("请输入地址：\n");
		scanf("%s", con->data[ps].addr);
		printf("修改成功\n");
	}
}


static void Print(struct contact* con)
{
	if (con->size == 0)
	{
		printf("没有要排序的内容\n");
	}
	else
	{
		int i = 0;
		printf("%-14s\t%-6s\t%-14s\t%-4s\t%-20s\n", "姓名", "年龄", "电话", "性别", "地址");
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

//对通讯录中的信息进行排序
//排序函数
//1.按照姓名进行排序
int Conpare_ByName(const void* e1, const void* e2)
{
	return strcmp(((struct peopleinform*)e1)->name, ((struct peopleinform*)e2)->name);
}
//2.按照年龄进行排序
int Conpare_ByAge(const void* e1, const void* e2)
{
	return ((struct peopleinform*)e1)->age - ((struct peopleinform*)e2)->age;
}
//3.按照住址进行排序
int Conpare_ByAddress(const void* e1, const void* e2)
{
	return strcmp(((struct peopleinform*)e1)->name, ((struct peopleinform*)e2)->name);
}
void sortcontact(struct contact* con)
{
	printf("请选择你想排序的方式：\n");
	printf("1.姓名\n2.年龄\n3.住址\n");
	int input = 0;
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		qsort(con->data, con->size, sizeof(con->data[0]), Conpare_ByName);
		Print(con);
		printf("排序成功\n");
		break;
	case 2:
		qsort(con->data, con->size, sizeof(con->data[0]), Conpare_ByAge);
		printf("排序成功\n");
		break;
	case 3:
		qsort(con->data, con->size, sizeof(con->data[0]), Conpare_ByAddress);
		printf("排序成功\n");
		break;
	}
}
