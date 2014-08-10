#include<iostream>
#include<cstring>
using namespace std;
void reverse1(char a[])
{
	int size = strlen(a);
	while(size>=0)
	{
		cout<<a[size--];
	}
	
}
void reverse(char a[])
{
	
	if(*a)
	{
		reverse(a+1);
		cout<<*a;
	}
	
}
int main()
{
   char a[] = "Geeks for Geeks";
   reverse(a);
   return 0;
}