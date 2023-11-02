//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool detectcycle(int start,vector<bool>&visited, vector<int> adj[]){
        
        pair<int,int>temp;
        temp.first=start;
        temp.second=-1;
        queue<pair<int,int>>q;
        q.push(temp);
        visited[start]=true;
        while(!q.empty()){
            pair<int,int>temp2=q.front();
            int cur=temp2.first;
            int pre=temp2.second;
            q.pop();
            
            for(int n:adj[cur]){
                if(!visited[n]){
                    visited[n]=true;
                    q.push({n,cur});
                    
                }else if(n!=pre){
                    return true;
                    
                }
                
                
                
                
            }
            
            
            
            
            
        }
        return false;
        
        
        
        
        
    }
    
    
    
    
    
    
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visited(V,false);
        
        for(int i=0;i<V;++i){
            if(!visited[i]){
            bool k=detectcycle(i,visited,adj);
            if(k){
                return true;
            }
            }
            
            
            
            
        }
        return false;
        
        
        
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends