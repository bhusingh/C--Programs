#include<iostream>
#include<stdlib.h>
#include<stack>
#include<list>
#include<stdio.h>
#include<iostream>
#include <list>
using namespace std;
 
// Graph class represents a directed graph using adjacency list representation
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[]);  // A function used by DFS
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS(int v);    // DFS traversal of the vertices reachable from v
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
	adj[w].push_back(v); 
	//cout<<"p";
}
 
void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " ";
 
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
}
 
// DFS traversal of the vertices reachable from v. It uses recursive DFSUtil()
void Graph::DFS(int v)
{
    // Mark all the vertices as not visited
	cout<<"Hi";
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
 
    // Call the recursive helper function to print DFS traversal
	cout<<"Hi";
    DFSUtil(v, visited);
}

int main()
{
	int m,n,v,u;
	//cin>>n>>m;
	//scanf("%d %d",&n,&m);
	Graph g(7);
	g.addEdge(0,1);
	g.addEdge(2,1);
	g.addEdge(2,3);
	g.addEdge(6,3);
	g.addEdge(5,1);
	g.addEdge(4,5);
	g.addEdge(6,4);
	//for(int i=0;i<m;i++)
	//{
		//scanf("%d %d",&v,&u);
		//cin>>v>>u;
		//g.addEdge(v,u);
		
	//}
	g.DFS(0);
	return 0;
}