#include<bits/stdc++.h>
using namespace std;
#define V  9
#define iPair pair<int, int>

// Dijkstra Algorithm using Adjacency list
class Graph
{
	int Ver;
	vector< iPair > *graph;

public:
	Graph(int Ver);
	void addEdge(int u, int v, int w);
	void dijkstra(int src);
};

Graph::Graph(int Ver)
{
	this->Ver = Ver;
	graph = new vector< iPair >[Ver];
}

void Graph::addEdge(int u, int v, int w)
{
	graph[u].push_back(make_pair(v, w));
	graph[v].push_back(make_pair(u, w));
}

void Graph::dijkstra(int src)
{
	priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
	vector<int> dist(Ver, INT_MAX);
	vector<bool> isSet(Ver, false);

	pq.push(make_pair(0, src));
	dist[src] = 0;

	while (!pq.empty())
	{
		int u = pq.top().second;
		pq.pop();
		isSet[u] = true;
		for (auto i : graph[u])
		{
			int v = i.first;
			int wt = i.second;

			if (!isSet[v] && dist[v] > dist[u] + wt)
			{
				dist[v] = dist[u] + wt;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
	cout << "\nVertex\tDistance from src\n";
	for (int i = 0; i < Ver; i++)
		cout << i << "\t\t" << dist[i] << "\n";
}

int main()
{
	Graph g(V);
	g.addEdge(0, 1, 4);
	g.addEdge(0, 7, 8);
	g.addEdge(1, 2, 8);
	g.addEdge(1, 7, 11);
	g.addEdge(2, 3, 7);
	g.addEdge(2, 8, 2);
	g.addEdge(2, 5, 4);
	g.addEdge(3, 4, 9);
	g.addEdge(3, 5, 14);
	g.addEdge(4, 5, 10);
	g.addEdge(5, 6, 2);
	g.addEdge(6, 7, 1);
	g.addEdge(6, 8, 6);
	g.addEdge(7, 8, 7);

	g.dijkstra(0);
	return 0;
}