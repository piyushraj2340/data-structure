#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

void DFS(vector <int >adj[],int s, bool visited[])
{

    visited[s] = true;
    cout<<" "<< s;

    vector <int >::iterator it;
    for(it = adj[s].begin(); it!= adj[s].end(); it++)
        if(!visited[*it])
            DFS(adj,*it,visited);

}

void BFS(vector <int >adj[],int s,int n)
{
    bool visited[n];
    memset(visited,0, sizeof(visited));
    visited[s] = 1;
    queue <int >Q;
    Q.push(s);

    while(!Q.empty())
    {
        int v = Q.front();
        Q.pop();
        cout<<" "<<v;

        vector <int >::iterator it;
        for(it = adj[v].begin(); it !=  adj[v].end(); it++)
            if(!visited[*it])
            {
                visited[*it] = 1;
                Q.push(*it);
            }
    }
}


void addEdge(vector <int > adj[],int src, int dest)
{
    adj[src].push_back(dest);
}

int main(int argc, char const *argv[])
{

    int v = 5;

    vector<int > adj[v];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 4, 2);
    addEdge(adj, 2, 3);

    cout<<"DFS traversal = "<<endl;
    bool visited[v];
    memset(visited,0, sizeof(visited));
    DFS(adj,0, visited);
    cout<<endl<<endl;

    cout<<"BFS traversal = "<<endl;
    BFS(adj,0, v);
    cout<<endl<<endl;

    return 0;
}