//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     long long int mod=1000000007;
    int fib(int n,vector<long long int>&dp){
        
        if(n==1||n==2){
            return 1;
        }
        
        if(dp[n]!=-1)return dp[n];
        
        return dp[n]=(fib(n-1,dp)+fib(n-2,dp))%1000000007;
        
        
        
        
        
    }
  
  
  
  
  
  
  
  
  
  
    int nthFibonacci(int n){
        // code 
        vector<long long int>dp(n+1,-1);
        return fib(n,dp);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends