#include<stdio.h>
using namespace std;
int main()
{
	int n,k,x,count=0,i=0;
	scanf("%d %d",&n,&k);
	while(i<n)
	{
		scanf("%d",&x);
		if(x%k==0)
			count++;
		i++;
	}
	printf("%d",count);
	return 0;
}