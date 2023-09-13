//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        // code here
        for(int num=0;num<min(N,M);num++){
            
            int rowsum=0;
            for(int j=0;j<M;j++){
                rowsum=rowsum+A[num][j];
            }
            int colsum=0;
            for(int i=0;i<N;i++){
             colsum=colsum+A[i][num];   
                }
            
            if(rowsum!=colsum){
                return 0;
            }
            
            
            
            
            
        }
        return 1;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> A[i][j];
        Solution ob;
        cout << ob.sumOfRowCol(N, M, A) << "\n";
    }
}
// } Driver Code Ends