//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
     void dfs(int v,vector<int>adj[],vector<bool>&visited){
         visited[v]=true;
         
         for(int n:adj[v]){
             if(!visited[n]){
                 dfs(n,adj,visited);
             }
             
         }
         }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector <int>adjl[V];
        for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj[i].size();j++){
                if(adj[i][j]==1&&i!=j){
                    adjl[i].push_back(j);
                }
            }
            }
            vector<bool>visited(V,false);
            int count =0;
            
            for(int i=0;i<V;i++){
                
                if(!visited[i]){
                    count++;
                    dfs(i,adjl,visited);
                    
                    
                    
                }
                
                
                
                
                
                
                
                
                
            }
            return count;
            
            
            
            
            
            
            
            
            
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends