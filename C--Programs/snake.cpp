#include<iostream>
#define INF 1<<20
using namespace std;
int graph[110][110];
void init()
{
	for(int i=0;i<110;i++)
	{
		for(int j=0;j<110;j++)
		{
			graph[i][j]=INF;
			if(i==j)
				graph[i][j]=0;
		}
	}
	for(int i=0;i<103;i++)
	{
		for(int j=i+1;j<=i+6;j++)
		{
			graph[i][j]=1;
		}
	}
}
void update()
{
	int m,n;
	char t;
	cin>>m>>t>>n;
	for(int i=0;i<m;i++)
	{
		int x,y;
		char z;
		cin>>x>>z>>y;
		graph[x][y]=0;
	}
	for(int i=0;i<n;i++)
	{
		int x,y;
		char z;
		cin>>x>>z>>y;
		graph[x][y]=0;
	}
}
void floyd_walshall()
{
	for(int k=0;k<110;k++)
	{
		for(int i=0;i<110;i++)
		{
			for(int j=0;j<110;j++)
				{
					if(graph[i][j]>graph[i][k]+graph[k][j])
					{
						graph[i][j] = graph[i][k]+graph[k][j];
					}
				}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		init();
		update();
		floyd_walshall();
		cout<<graph[1][100];
	}
	return 0;
}