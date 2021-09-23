#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int BFSorg(vector<int>adj[],bool visited[],int v,int s)
{
    visited[s]=true;
    int curr=1;
    int color[v]={0};
    color[s]=1;
    queue<int>q;
    q.push(s);
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        curr=curr*-1;
        for(int v:adj[u]){
            if(v==u)
                return 0;
            if(color[v]==color[u])
                return 0;
            if(visited[v]==false&&color[v]==0)
            {
                color[v]=curr;
                visited[v]=true;
                q.push(v);
            }
        }
    }
    return 1;
}
void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void BFS(vector<int>adj[],int v,int s)
{
    bool visited[v+1];
    int k;
    for(int i=0;i<v;i++)
        visited[i]=false;
    k=BFSorg(adj,visited,v,s);
    if(k==1)
    {
        cout<<"YES, BIPARTITE";
    }
    else
    {
        cout<<"NOT BIPARTITE";
    }
}
int main()
{
    int v;
    cout<<"Enter the Vertex : ";
    cin>>v;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,3);
    addEdge(adj,1,2);
    addEdge(adj,2,3);
    BFS(adj,v,0);
}
