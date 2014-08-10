#include<iostream>
#include<stdio.h>
#include<vector>
#include<climits>
using namespace std;
int main()
{
	int T=0,n=0,k=0,p=0;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&n,&k);
		vector<int> my(n);

		for(int i=0; i<n; i++)
			cin>>my[i];
		
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(my[i]%2==0)
			{
					count++;
			}
			if(count==k && k!=0)
			{
				cout<<"YES"<<endl;
				break;
			}
		}
		if(k==0 && count<n)
			cout<<"YES"<<endl;
		else if(count!=k)
			cout<<"NO"<<endl;
	}
}