//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool check(int start,int parent,vector<int>&vis,vector<int> adj[]){
        vis[start]=1;
        pair<int,int>temp;
        temp.first=start;
        temp.second=parent;
        queue<pair<int,int>>q;
        q.push(temp);
        
        while(!q.empty()){
            int cur=q.front().first;
            int pr=q.front().second;
            q.pop();
            
            for(int n:adj[cur]){
                
                if(vis[n]==-1){
                    vis[n]=1;
                    pair<int,int>temp2;
                    temp2.first=n;
                    temp2.second=cur;
                    q.push(temp2);
                    
                    
                    
                }else{
                    if(n!=pr){
                        return true;
                    }
                    
                    
                    
                    
                    
                }
                
                
                
                
                
            }
            
            
            
            
            
            
            
            
            
        }
        
        return false;
     
     
     
     
     
     
     
     
     
     
       
        
        
    }
    
    
    
    
    
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,-1);
        for(int i=0;i<V;++i){
            if(vis[i]==-1){
                bool ans=check(i,-1,vis,adj);
                if(ans){
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