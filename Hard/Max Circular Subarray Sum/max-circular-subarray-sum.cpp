//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    private:
    int kadaneMaxSum(int arr[], int n) {
        int sum = 0;
        int maxi = INT_MIN; 
        for(int i=0; i<n; i++) {
            sum += arr[i];
            maxi = max(sum, maxi); 
            if(sum < 0) sum = 0;
        }
        return maxi;
    }
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        
        // your code here
         int nonCircularSum = kadaneMaxSum(arr, num);
        int totalSum = 0;
        for(int i=0; i<num; i++){
            totalSum += arr[i];
            arr[i] = -arr[i];
        }
              
        int circularSum = totalSum + kadaneMaxSum(arr, num);
        if(circularSum == 0)
            return nonCircularSum;
        return max(circularSum,nonCircularSum);
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends