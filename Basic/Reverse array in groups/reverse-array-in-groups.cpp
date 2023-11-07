//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
     void reverse(int l,int r,vector<long long>& arr){
         if(l>r) return;
         int temp=arr[l];
         arr[l]=arr[r];
         arr[r]=temp;
         reverse(l+1,r-1,arr);
         }








    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        
        for(int i=0;i<arr.size();i++){
            int l=i;
            int r=i+k-1;
             if(r>=arr.size()){
                r=arr.size()-1; 
            
            }
            reverse(l,r,arr);
            i=i+k-1;
             }
        
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends