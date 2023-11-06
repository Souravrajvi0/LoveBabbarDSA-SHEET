//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        
        vector<vector<int>>adj(N);
        for(int i=0;i<M;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
             adj[edges[i][1]].push_back(edges[i][0]);
            
        }
        
        vector<int>dis(N,INT_MAX);
        dis[src]=0;
        
        pair<int,int>temp={src,0};
        queue<pair<int,int>>q;
        q.push(temp);
        
        while(!q.empty()){
            
            auto it=q.front();
            int node=it.first;
            int d=it.second;
            
            q.pop();
            
            for(auto l:adj[node]){
                
                 if(dis[l]>d+1){
                    q.push({l,d+1});
                    dis[l]=d+1;
                }
                 }
       }
        for(auto &d:dis){
            if(d==INT_MAX)d=-1;
        }
       return dis; 
        
        
        
        
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