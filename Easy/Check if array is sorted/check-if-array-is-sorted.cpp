//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        if(n==1){
            return true; ;
        }
        
        int i=0;
        if(arr[i]>arr[i+1]){
            return false;
        }
      bool ans=  arraySortedOrNot(arr+1,--n);
      return ans;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends