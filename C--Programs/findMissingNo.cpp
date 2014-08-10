#include<iostream>
using namespace std;
int getMissingNo(int a[],int n)
{
	int k=0;
	for(int i=0;i<n;i++)
	{
		k=k^a[i];
	}
	for(int i=1;i<=n+1;i++)
	{
		k=k^i;
	}
	return k;
}
int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int miss = getMissingNo(a, 5);
    cout<<miss;
}