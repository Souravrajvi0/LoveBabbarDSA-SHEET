//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
   void gb(int i,vector<string>&ans,vector<int>&temp,int num){
       if(i>=num){
           bool flag=true;
           for(int i=0;i<temp.size()-1;i++){
               if(temp[i]==1&&temp[i+1]==1){
                   flag=false;
               }
               
               
           }
           if(flag){
               string s="";
               for(int i=0;i<temp.size();i++){
                  s += to_string(temp[i]);
               }
               ans.push_back(s);
               
           }
           return;
            }
       
       temp[i]=1;
       gb(i+1,ans,temp,num);
       temp[i]=0;
       gb(i+1,ans,temp,num);
       
      }















    vector<string> generateBinaryStrings(int num){
        //Write your code
        
        vector<int>temp(num,0);
        vector<string>ans;
        gb(0,ans,temp,num);
        sort(ans.begin(),ans.end());
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends