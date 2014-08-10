#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<map>
#define MAX 100
using namespace std;
int main()
{
	int i=0,T,n,x,count=0;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);

		int arr[MAX]={0};
		map<int,vector<int> >m;
		while(i<n)
		{
			while(cin>>x != '\n')
			{
				m[i].push_back(x);
			}

		}
	map< int,vector<int> > :: iterator it;
    for (it=m.begin(); it!=m.end(); it++)
    {
        for (int i=0; i<it->second.size(); ++i)
            
    }
	}
		
	return 0;
}