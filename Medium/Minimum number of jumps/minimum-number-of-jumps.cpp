//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n<=1){
            return 0;   // Ye condition bhul gaya tha
        }
        if(arr[0]==0){
            return -1;
        }
      int i=0;
      int jump=0;
      while(i<n){
         int x=arr[i];
         
         if(x==1&&arr[i+x]==0){
                 return -1;
             }
         int l=1;
         int flag=-1;
         int max=INT_MIN;
         if(i+x>=n-1){
               return ++jump; 
             }
            
         while(l<=x){
             if(arr[i+l]==0){
                 l++;
                 continue;
                 
             }
             if(l+arr[i+l]>max){
                 max=l+arr[i+l];
                 flag=l;
                 }
                 l++;
             }
             if(flag==-1){
                 return -1;
             }
            
             i=i+flag;
             ++jump;
         }
          return jump;  
            
            }
    
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends