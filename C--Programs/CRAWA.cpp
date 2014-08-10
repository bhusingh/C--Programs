#include<iostream>
using namespace std;
int main()
{
	int T,x,y;
	cin>>T;
	while(T--)
	{
		cin>>x>>y;
		if(x==0)
		{
			if(y%2==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else if(y==0)
		{
			if(x%2==0)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
		else if(x>0&&y>0)
		{
			for(int i=0;i<=x;i++)
			{
				for(int j=0;j<x+1;j++)
				{
					
				}
			}
		}
	}
	return 0;
}