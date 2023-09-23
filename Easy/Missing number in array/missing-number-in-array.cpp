//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
         sort(array.begin(),array.end());
        int low=0;
        int high=n-1;
        int mid;
        int index=-1;
        while(low<=high){

       mid=low+(high-low)/2;

       int ans=array[mid]-mid-1;

       if(ans==0){
           low=mid+1;
       }else{
         index=mid;
         high=mid-1;
       }
}
if(index==-1){
    return n;
}
     
     return index+1;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends