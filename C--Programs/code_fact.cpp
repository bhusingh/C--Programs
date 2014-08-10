#include<iostream>
#include<stdio.h>
using namespace std;
unsigned long long fact(unsigned long long x)
{
	if(x==0||x==1)
		return 1;
	return x*fact(x-1);
}
int main()
{
	unsigned long long n,i=0;
	unsigned long long x;
	scanf("%llu",&n);
	while(i<n)
	{
		scanf("%llu",&x);
		printf("%llu\n",fact(x));
		i++;
	}
}