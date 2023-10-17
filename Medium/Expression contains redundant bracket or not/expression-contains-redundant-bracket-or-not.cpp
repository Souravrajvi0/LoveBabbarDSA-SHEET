//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        // code here
        stack<char>st;

        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch!=')'){
                st.push(ch);
            }else{
                char t=st.top();
                
                if(t!='('){
                    int t=0;
                    while(st.top()!='('){
                        st.pop();
                        t++;
                    }
                    if(t==1){
                        return true;
                    }
                   
                    st.pop();
                    continue;
                  
                    
                    
                    
                }else{
                    st.pop();
                    return true;
                    
                    
                }
                
                
                
            }
            
            
            
        }
        return false;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends