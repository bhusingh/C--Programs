#include<iostream>
#include<queue>
#include<list>
using namespace std;
class Graph
{
	int v;
	list<int>*adj;
	public: 
		Graph(int v);
		void addEdge(int v,int w);
		bool isReachable(int s,int d);
};
Graph::Graph(int v)
{
	this->v= v;
	adj = new list<int>[v];
}
void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}
bool Graph::isReachable(int s,int d)
{
	if(s==d)
		return true;
	bool *visited = new bool[v];
	for(int i=0;i<v;i++)
		visited[i] = false;
	queue<int>q;
	visited[s]=true;
	q.push(s);
	list<int> ::iterator i;
	while(!q.empty())
	{
		s = q.front();
		q.pop();
		for(i=adj[s].begin();i!=adj[s].end();i++)
		{
			if(*i==d)
				return true;
			if(!visited[*i])
			{
				visited[*i]=true;
				q.push(*i);
			}
		}
	}
	return false;
}
int main()
{
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
	int u = 3, v = 2;
	if(g.isReachable(u,v))
	{
		cout<<"there is a path from "<<u << " to "<<v<<endl;
	}
	else
	{
		cout<<"there is no path from "<<u << " to "<<v<<endl;
	}
	return 0;
}