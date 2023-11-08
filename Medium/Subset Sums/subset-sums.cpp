//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
  void calsum(int i,vector<int>&arr,vector<int>&res,vector<int>&temp){
      if(i>=arr.size()){
          int sum=0;
          for(int i=0;i<temp.size();i++){
              sum=sum+temp[i];
              }
            
             res.push_back(sum);
             return;
        }
        
        temp.push_back(arr[i]);
        calsum(i+1,arr,res,temp);
        temp.pop_back();
        calsum(i+1,arr,res,temp);
      }
   
   
   
   
   
   
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>res;
        vector<int>temp;
        calsum(0,arr,res,temp);
       
        return res;
        
        
        
        
        
        
    }
 

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends