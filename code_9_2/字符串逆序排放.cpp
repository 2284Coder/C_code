//字符串的逆序（递归实现）；不能使用库函数
#include<stdio.h>
#include<string.h> 
void reverse_string(char arr[])
{
	int left=0;
	int right=strlen(arr)-1;
	while(left<right)
	{
		int temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
		left++;
		right--;
	}
}
main()
{
	char arr[]="abcdef";
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
 } 
