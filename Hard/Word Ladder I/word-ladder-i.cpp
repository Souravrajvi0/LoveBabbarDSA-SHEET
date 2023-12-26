//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        // Code here
        queue<pair<string, int>> q;
        q.push({startWord, 1});
        
        // creating set to store wordList, 
       // so that when we push word in queue we erase it from set
        set<string> st(wordList.begin(), wordList.end());
        st.erase(startWord);
        
        // using BFS
        while(!q.empty()) {
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();
            
            // if we reach to the targtWord return the steps
            if(word == targetWord) return steps;
            
            for(int i=0; i<word.length(); i++) {
                char original = word[i];
                // changing ith char from a to z
                for(char ch='a'; ch<='z'; ch++) {
                    word[i] = ch;
                    // checking if word is exits in a set push in a queue
                    if(st.find(word) != st.end()) {
                        st.erase(word);
                        q.push({word, steps+1});
                    }
                }
                word[i] = original;
            }
        }
        
        // if steps is return during BFS means we can't reach to the targetWord
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends