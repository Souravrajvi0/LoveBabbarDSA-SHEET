//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
     vector<vector<int>>res;
     vector<int>cur;
     
     void generator(int i,int n,vector<int>& A){
         
         if(i>=n){
             res.push_back(cur);
             return;
         }
         cur.push_back(A[i]);
         generator(i+1,n,A);
         cur.pop_back();
         generator(i+1,n,A);
         
         
         
         
     }
    
    
    
    
    
    
    
    
    
    vector<vector<int>>subsets(vector<int>& A)
    {
        //code here
        int n=A.size();
        int i=0;
        generator(i,n,A);
        sort(res.begin(),res.end());
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
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends