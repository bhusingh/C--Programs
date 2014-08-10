#include<iostream>
#include<stdio.h>
using namespace std;
void trailingZero(unsigned long long x)
{
	int zero=0;
	while(x!=0)
	{
		zero += x/5;
		x=x/5;
	}
	printf("%d\n",zero);
}
int main()
{
	unsigned long long x;
	int n,i=0;
	scanf("%d",&n);
	while(i<n)
	{
	scanf("%llu",&x);
	trailingZero(x);
	i++;
	}
	return 0;
}