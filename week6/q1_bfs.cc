#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int s=0;
int d=4;
void BFS(vector<int>adj[],bool visited[],int i)
{
    if(s==d)
       {cout<<"path exists"<<endl;
       return;
       }

    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
         for(int v:adj[u]){
            if(v==d)
                cout<<"path exists";
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push(v);
            }
        }
    }
}

void BFSDis(vector<int>adj[],int v)
{
    bool visited[v+1];
    int i;
    for(i=0;i<v;i++)
    {
        visited[i]=false;

    }
    for(i=0;i<v;i++)
        if(visited[i]==false)
        {
         BFS(adj,visited,i);
        }
}

void addEdge(vector<int>adj[],int u,int v)
{
    adj[v].push_back(u);
    adj[u].push_back(v);
}
int main()
{
    int v=5;
    vector<int>adj[v+1];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    BFSDis(adj,v);
}
