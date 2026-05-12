class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans="";

        //traverse the first string of the array
        for(int i=0; i<strs[0].size(); i++){
            char ch=strs[0][i];

            //compare the characters of the first string with all others 
            for(int j=1; j<strs.size(); j++){
                if(i>strs[j].size() || ch!=strs[j][i])
                    return ans;
            }
            ans=ans+ch;
        }
        return ans;
    }
};