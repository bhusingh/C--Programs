#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define MAX 256
using namespace std;
char *removeDirtyChars(char str1[],char str2[])
{
	int res=0;
	int *count = (int *)calloc(MAX,sizeof(int));
	for(int i=0;str2[i];i++)
	{
		count[str2[i]]=1;
	}
	for(int i=0;str1[i];i++)
	{
		if(count[str1[i]]==0)
		{
			str1[res++]=str1[i];
		}
	}
	str1[res] = '\0';
	return str1;
}
int main()
{
    char mask_str[]  = "mask";
    char str[]         = "geeksforgeeks";
    printf("%s", removeDirtyChars(str, mask_str));
    getchar();
    return 0;
}