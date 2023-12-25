//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
             long long left = 0, right = 0, mod = 1e9 + 7;
            int k = 0;
            while (left < n && right < m) {
                int val1 = arr1[left]%mod, val2 = arr2[right]%mod;
                if (k < n) {
                    if (val1 <= val2) {
                        arr1[k] += (val1) * mod;
                        left++;
                    } else {
                        arr1[k] += (val2) * mod;
                        right++;
                    }
                } else {
                    if (val1 <= val2) {
                        arr2[k - n] += (val1) * mod;
                        left++;
                    } else {
                        arr2[k - n] += (val2) * mod;
                        right++;
                    }
                }
                k++;
            }
            while (left < n) {
                if (k < n) {
                    arr1[k] += (arr1[left]%mod) * mod;
                } else {
                    arr2[k - n] += (arr1[left]%mod) * mod;
                }
                left++;
                k++;
            }
            while (right < m) {
                if (k < n) {
                    arr1[k] += (arr2[right]%mod) * mod;
                } else {
                    arr2[k - n] += (arr2[right]%mod) * mod;
                }
                right++;
                k++;
            }
            for (int i = 0; i < n; i++) {
                arr1[i] /= mod;
            }
            for (int i = 0; i < m; i++) {
                arr2[i] /= mod;
            }
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends