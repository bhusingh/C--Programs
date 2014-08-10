#include<iostream>
using namespace std;
int getOddOccurrence(int a[],int n)
{
	int k=a[0];
	
	for(int i=1;i<n;i++)
	{
		k=k^a[i];
	}
	//cout<<k;
	return k;
}
int main()
{
     int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
     int n = sizeof(ar)/sizeof(ar[0]);
     cout<<getOddOccurrence(ar, n);
     return 0;
}