//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
   void floodfill(int sr,int sc ,int tar,int newColor,vector<vector<int>>& image,vector<vector<bool>>&vis){
       image[sr][sc]=newColor;
       vis[sr][sc]=true;
       
       
       int row=image.size();
       int col=image[0].size();
         
       
       for(int delr=-1;delr<=1;delr++){
           
           for(int delc=-1;delc<=1;+delc++){
               if(abs(delc)==abs(delr)){
                   continue;
               }
               
               int nr=sr+delr;
               int nc=sc+delc;
               if(nr>=0&&nr<row&&nc>=0&&nc<col&&image[nr][nc]==tar&&!vis[nr][nc]){
                   floodfill(nr,nc,tar,newColor,image,vis);
               }
               
           }

       }
       }

 vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        int row=image.size();
        int col=image[0].size();
        vector<vector<bool>>vis(row,vector<bool>(col,false));
        int tar=image[sr][sc];
        floodfill(sr,sc,tar,newColor,image,vis);
        return image;
        }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends