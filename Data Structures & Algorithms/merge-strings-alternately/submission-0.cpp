class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int size=min(n,m);
        string ans="";

        for(int i=0; i<size; i++){
            ans+=word1[i];
            ans+=word2[i];
        }
        
        for(int i=size; i<n; i++){
            ans+=word1[i];
        }
        for(int i=size; i<m; i++){
            ans+=word2[i];
        }

        return ans;
    }
};