#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cstring>
bool areRotations(char str1[],char str2[])
{
	int size1 = strlen(str1);
	int size2 = strlen(str2);
	if(size1 != size2)
		return false;
	char *str3 = (char *)malloc(sizeof(char));
	str3[0]='\0';
	strcat(str3,str1);
	strcat(str3,str1);
	void *pattern = strstr(str3,str2);
	if(pattern == NULL)
		return false;
	else
		return true;
	
}
int main()
{
    char str1[] = "ACAD";
    char str2[] = "ACA";
 
    if (areRotations(str1, str2))
       printf("Strings are rotations of each other");
    else
       printf("Strings are not rotations of each other");
 
    getchar();
    return 0;
}