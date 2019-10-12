# include <iostream>
# include <unordered_map>
#  include <queue>
using namespace std;

void print_bfs(int ** graph,int v,int sv,unordered_map <int,bool> visited)
{
  queue <int> q;
  q.push(sv);
  visited[sv]=true;
  while (!q.empty())
  {
    int fro=q.front();
     cout<<fro<<" ";
    q.pop();

    for (int i=0;i<v;i++)
    {
      if (graph[fro][i]==1)
      {
        if (visited[i]==true)
        {
          continue;
        }

        visited[i]=true;
        q.push(i);
      }
    }
  }
}
void print (int ** graph,int v,int sv,bool * visited) // this traversal is called depth first traversal because we are going into the depth before operationg on other adjacent vertices.
{

  cout<<sv<<endl;
  visited[sv]=true;

  for (int i=0;i<v;i++)
  {
    if (i==sv)
    {
     continue;
    }

    if (graph[sv][i]==1)
    {
      if (visited[i])
    {
       continue;
    }
      print (graph,v,i,visited);
    }
  }
}

void DFS(int ** graph,int n)
{
  bool * visited=new bool[n];
  for (int i=0;i<n;i++)
  {
    visited[i]=false;
  }

  print(graph,n,0,visited);

  for (int i=0;i<n;i++)
  {
    if (!visited[i])
    {
      print (graph,n,i,visited);
    }
  }
}

void BFS(int ** graph,int n)
{
 bool * visited=new bool[n];
  for (int i=0;i<n;i++)
  {
    visited[i]=false;
  }

  print(graph,n,0,visited);

  for (int i=0;i<n;i++)
  {
    if (!visited[i])
    {
      print (graph,n,i,visited);
    }
  }
}
int main()
{
    int v,e;
    cin>> v>>e;
    int ** graph=new int * [v];
    for (int i=0; i<v; i++)
    {
      graph[i]=new int[v];

      for (int j=0; j<v; j++)
      {
        graph[i][j]=0;
      }
    }

    for (int i=0; i<e; i++)
    {
      int f,s;
      cin>> f>>s;
      graph[f][s]=1;
      graph[s][f]=1;
    }

    unordered_map <int,bool> seen;
    bool* visited=new bool[v];
    for (int i=0;i<v;i++)
    {
      visited[i]=false;
    }
    for (int i=0;i<v;i++)
    {
      seen[i]=false;
    }
    cout<<endl<<endl;
    cout<<"DFS"<<endl;
    print (graph,v,0,visited);
    cout<<endl<<endl;
    cout<<"DFS"<<endl;
    DFS(graph,v);
    cout<<endl;
    cout<<"BFS"<<endl;
    print_bfs(graph,v,0,seen);
    cout<<endl;
    BFS(graph,v);
    return 0;
}

