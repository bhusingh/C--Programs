#include<iostream>
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
#define MAX 256
using namespace std;
int getMaxOccuringChar(char str[])
{
	int *arr = (int *)calloc(MAX,sizeof(int));
	int max_count=0;
	for(int i=0;*(str+i);i++)
	{
		arr[str[i]]++;
	}
	for(int i=0;i<MAX;i++)
	{
		if(arr[i]>arr[max_count])
		{
			max_count = i;
		}
	}
	return max_count;
}
int main()
{
  char str[] = "sample string";
  printf("%c", getMaxOccuringChar(str));
 
  getchar();
  return 0;
}