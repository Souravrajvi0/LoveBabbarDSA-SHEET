//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool check(string &str,int low,int high){
	    if(low>high){
	        return true;
	    }
	    if(str[low]!=str[high]){
	        return false;
	    }
	   return check(str,++low,--high);
	}
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int low=0;
	    int high=S.length()-1;
	    bool ans= check(S,low,high);
	    return ans;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends