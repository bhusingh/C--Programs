#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#define MAX 256
char *removeDups(char str[])
{
	int *arr = (int *)calloc(MAX,sizeof(int));
	int i,res=0;
	for(i=0;*(str+i);i++)
	{
		if(arr[str[i]] == 0)
		{
			arr[str[i]] = 1;
			str[res++]=str[i];
		}
	}
	str[res] = '\0';
	return str;
}
int main()
{
    char str[] = "geeksforgeeks";
    printf("%s", removeDups(str));
    return 0;
} 