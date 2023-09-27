//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
  long long term(int N){
      if(N==1){
           
            return 0;
        }
        if(N==2){
            
            return 1;
        }
      
      long long t1=term(N-2);
      long long t2=term(N-1);
      long long t=t1*t1-t2;
      return t;
    
      }
    void gfSeries(int N)
    {
        // Write Your Code here
       for(int i=1;i<=N;i++){
           cout<<term(i)<<" ";
       }
       cout<<endl;
        
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
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends