//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool dfsc(int start,vector<int>&vis,vector<int>&path,vector<int> adj[]){
      vis[start]=1;
      path[start]=1;
      
      for(int n:adj[start]){
          if(vis[n]==-1){
              bool ans=dfsc(n,vis,path,adj);
              if(ans){
                  return true;
              }
          }else{
              if(path[n]==1){
                  return true;
              }
              
              
              
          }
          
          
          
          
      }
      
      
      
      
      path[start]=0;
      return false;
    }
    
    
    
    
    
    
        
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,-1);
        vector<int>path(V,0);
        for(int i=0;i<V;i++){
            if(vis[i]==-1){
                if(dfsc(i,vis,path,adj)){
                    return true;
                }
            }
        }
        return false;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends