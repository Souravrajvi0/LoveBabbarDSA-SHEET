//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    int first(int arr[],int n,int x){
        
        int low=0;
        int high=n-1;
        int mid;
        int oc=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]==x){
                oc=mid;
                high=mid-1;
            }else if(arr[mid]>x){
                high=mid-1;
            }else{
                low=mid+1;
            }
             }
        return oc;
        
    }
    int last(int arr[],int n,int x){
        
        int low=0;
        int high=n-1;
        int mid;
        int oc=-1;
        while(low<=high){
             mid=low+(high-low)/2;
            if(arr[mid]==x){
                oc=mid;
                low=mid+1;
            }else if(arr[mid]>x){
                high=mid-1;
            }else{
                low=mid+1;
            }
             }
        return oc;
        
    }
    
    
    
    
    
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> ar;
        int fir= first(arr,n,x);
        int las=last(arr,n,x);
        ar.push_back(fir);
        ar.push_back(las);
        return ar;
        
        
        
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends