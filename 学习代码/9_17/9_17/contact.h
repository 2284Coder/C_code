#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max_name 14
#define max_tele 14
#define max_sex 4
#define max_addr 20
#define MAX 1000

struct peopleinform
{
	char name[max_name];
	int age;
	char tele[max_tele];
	char sex[max_sex];
	char addr[max_addr];
};
struct contact
{
	struct peopleinform data[MAX];
	int size;
};
enum option
{
	exit1,
	add,
	dele,
	search,
	modifi,
	show,
	sort
	
};

void Initcontact(struct contact* con);
void addcontact(struct contact* con);
void showcontact(const struct contact* con);
void delecontact(struct contact* con);
void searchcontact(const struct contact* con);
void modificontact(struct contact* con);
void sortcontact(struct contact* con);