//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
   void bfs(vector<vector<int>>& adj,int src,vector<bool>&vis,vector<int>&d){
       
       vis[src]=true;
       d[src]=0;
       
       queue<pair<int,int>>q;
       q.push({src,0});
       
       while(!q.empty()){
           pair<int,int>temp=q.front();
           
           int node=temp.first;
           int dis=temp.second;
           q.pop();
           
           for(int n:adj[node]){
               if(!vis[n]){
                   vis[n]=true;
                   d[n]=dis+1;
                   q.push({n,dis+1});
               }
            }
          
           
           
           
           
           
       }
       
    }
  
  
  
  
  
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        
        vector<bool>vis(N,false);
        vector<int>distance(N,-1);
         vector<vector<int>> adj(N);
        for(auto edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
       
        bfs(adj,src,vis,distance);
        
        
        return distance;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends