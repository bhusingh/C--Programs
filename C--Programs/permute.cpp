#include<iostream>
#include<stdlib.h>
using namespace std;
void swap (char *a,char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
void permute(char a[],int i,int n)
{
	if(i == n)
		cout<<a<<endl;
	else
	{
		for(int j=i;j<=n;j++)
		{
			swap(a[i],a[j]);
			permute(a,i+1,n);
			swap(a[i],a[j]);
		}
	}
}int main()
{
   char a[] = "ABC";  
   permute(a, 0, 2);
   return 0;
}