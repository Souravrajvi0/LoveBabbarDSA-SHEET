//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    bool isPossible(int sw,vector<int>& sweetness,int k,int N){
        int sum=0;
        int i=0;
        for(i=0;i<N;i++){
            sum+=sweetness[i];
            if(sum>=sw){
                i++;
                break;
            }
        }
        if(sum>=sw){
            int rsum=0;
            while(i<N){
                rsum+=sweetness[i];
                if(rsum>=sw){
                    rsum=0;
                    k--;
                }
                i++;
            }
            if(k>0){
                return false;
            }else{
                return true;
            }
        }else{
            return false;
        }
    }
    int maxSweetness(vector<int>& sweetness, int N, int K) {
    // Write your code here.
    int lo = 0;
       int hi = 1000000000;
       while(lo<=hi){
           int mid = lo+(hi-lo)/2;
           if(isPossible(mid,sweetness,K,N)){
               lo = mid+1;
           }else{
               hi = mid-1;
           }
       }
       return hi;
    } 
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends