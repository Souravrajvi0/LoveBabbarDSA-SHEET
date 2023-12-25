//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
         int n = array1.size();
        int m = array2.size();
        //
        int X = (n + m)/2 + 1;
        //
        vector<int> vec(X);
        //
        int i=0, j=0, k=0;
        //
        while(k < X && i < n && j < m){
            
            if(array1[i] <= array2[j]){
                vec[k++] = array1[i++];
            }
            else{
                vec[k++] = array2[j++];
            }
        }
        while(k < X && i < n) vec[k++] = array1[i++];
        while(k < X && j < m) vec[k++] = array2[j++];
        
        // for(auto it : vec) cout<<it<<" ";cout<<endl;
        //
        double ans = ((n+m) % 2 == 0)? ((double)vec[X-1] + vec[X-2])/2 : vec[X-1];
        //
        return ans;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends