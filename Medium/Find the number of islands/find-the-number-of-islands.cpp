//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void discover(vector<vector<bool>>&visited,int i,int j,vector<vector<char>>&grid){
        visited[i][j]=true;
        int row=grid.size();
        int col=grid[0].size();
       
       for(int delr=-1;delr<=1;++delr){
           
           for(int delc=-1;delc<=1;++delc){
               int nr=i+delr;
               int nc=j+delc;
               
               if(nr>=0&&nr<row&&nc>=0&&nc<col&&grid[nr][nc]=='1'&&!visited[nr][nc]){
                   discover(visited,nr,nc,grid);
                   
                   
               }
               
               
           }
           
           
           
           
       }
        
        
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<bool>>visited(row,vector<bool>(col,false));
        int count=0;
        
        for(int i=0;i<row;++i){
            
            
            for(int j=0;j<col;++j){
                bool temp=visited[i][j];
                if(!temp&&grid[i][j]!='0'){
                    count++;
                    discover(visited,i,j,grid);
                    
                }
                
                
                
            }
            
            
            
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends