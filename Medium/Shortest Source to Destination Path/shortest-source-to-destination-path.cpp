//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   int sp(int X,int Y,vector<vector<int>> A){
       
      int row=A.size();
      int col=A[0].size();
      pair<int,pair<int,int>>start={0,{0,0}};
      priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
       
       pq.push(start);
       vector<vector<int>> st(A.size(),vector<int>(A[0].size(),INT_MAX));
       st[0][0]=0;
       
       while(!pq.empty()){
           
           pair<int,pair<int,int>>temp=pq.top();
           int nums=temp.first;
           int fc=temp.second.first;
           int sc=temp.second.second;
           pq.pop();
           
           for(int delr=-1;delr<=1;delr++){
               
               
               for(int delc=-1;delc<=1;delc++){
                   
                   if(abs(delr)==abs(delc)){
                       continue;
                   }
                   int icr=fc+delr;
                   int icc=sc+delc;
                   if(icr>=0&&icr<row&&icc>=0&&icc<col&&A[icr][icc]==1){
                       
                       if(st[icr][icc]>1+nums){
                           st[icr][icc]=1+nums;
                           pq.push({1+nums,{icr,icc}});
                           
                       }
                       
                       
                         }
                   }
               
                 }
           
           }
           return st[X][Y];
       
       }
 int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        if(A[0][0]==0){
            return -1;
        }
        int k=sp(X,Y,A);
        if(k==INT_MAX){
            return -1;
        }
        return k;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends