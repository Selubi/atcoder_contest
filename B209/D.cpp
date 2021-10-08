#include<bits/stdc++.h>
#include<limits.h>
#define rep(i,j,n) for(int i= (int)j;i<(int)n;i++)

using namespace std;
typedef long long ll;

int minDistance(vector<int> dist, vector<bool> sptSet)
{
    //returns the argmin (vertex number) of dist, which has not been searched yet.
    int val = INT_MAX;
    int ver;
    for (int i = 0; i < dist.size(); i++)
    {
        if (!sptSet[i])
        {
            if (dist[i] < val)
            {
                val = dist[i];
                ver = i;
            }
        }
    }
    return ver;
}

int djikstra(vector<vector<int>> &edges, int src, int dest)
{
    //edges is a 2D vector that represents an undirected graph represented by an Adjacency Matrix
    //dist is a vector to save the distance of each vertex from src. dist WILL BE INITIALIZED.
    //src is the starting vertex
    //It is assumed that the cost of each existing side is a positive number

    vector<bool> sptSet(edges.size(), 0);      //sptSet will record which vertex has been searched
    vector<int> dist(edges.size(), INT_MAX); //initialize distance of each vertex to inf
    dist[src] = 0;                             //set the distance of source to 0 so it gets chosen first

    //repeat N-1 times to search the distance to each vertex
    for (int count = 0; count < edges.size()-1; count++)
    {
        int u = minDistance(dist, sptSet); //determine the next vertex to be searched
        sptSet[u] = 1;                     //set it to searched

        //search the edges connected to vertex u
        for (int i = 0; i < edges.size(); i++)
        {
            //update the dist if it hasnt been searched and the cost is not 0
            if (!sptSet[i] && edges[u][i])
            {
                dist[i] = min(dist[i], dist[u] + edges[u][i]);
            }
        }
    }
    return dist[dest];
}

int main(void){
    int N,Q;cin>>N>>Q;
    vector<vector<int>> edges(N,vector<int>(N,0));
    rep(i,0,N-1){
        int a,b;
        cin>>a>>b;
        edges[a-1][b-1]=1;
        edges[b-1][a-1]=1;
    }
    rep(i,0,Q){
        int c,d,count;
        cin>>c>>d;
        count=djikstra(edges,c-1,d-1);
        if(count%2==1)cout<<"Road"<<endl;
        else cout<<"Town"<<endl;
    }
    return 0;
}