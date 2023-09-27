//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void seq(vector<int>&arr,int N){
        
        
        
        arr.push_back(N);
        if(N==1){
            return ;
        }
        if(N%2==0){
            int l=pow(N,1.0/2);
            seq(arr,l);
            
            
            
        }else{
            int r=pow(N,3.0/2);
            seq(arr,r);
            
            
            
            
            
        }
        
    }

    vector<int> jugglerSequence(int N){
        vector <int>arr;
        seq(arr,N);
        return arr;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends