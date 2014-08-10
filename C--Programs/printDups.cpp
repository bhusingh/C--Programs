#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define MAX 256
using namespace std;
void printDups(char str[])
{
	int *count = (int *)calloc(MAX,sizeof(int));
	for(int i=0;str[i];i++)
	{
		if(count[str[i]]==1)
		{
			cout<<str[i];
		}
		count[str[i]]=1;
	}
}
int main()
{
    char str[] = "test string ";
    printDups(str);
    getchar();
    return 0;
}