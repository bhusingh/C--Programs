#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define MAX 256
using namespace std;
int firstNonRepeating(char str[])
{
	int *count = (int *)calloc(MAX,sizeof(int)); 
	int *index = (int *)calloc(MAX,sizeof(int));
	for(int i=0;i<str[i];i++)
	{
		count[str[i]]++;
		index[str[i]]=i;
	}
	for(int i=0;i<str[i];i++)
	{
		if(count[str[i]]==1)
		{
			return i;
			break;
		}
	}
	return -1;
}
int main()
{
  char str[] = "geeksquiz";
  int index =  firstNonRepeating(str);
  if (index == -1)  
    printf("Either all characters are repeating or string is empty");
  else
   printf("First non-repeating character is %c", str[index]);
  getchar();
  return 0;
}