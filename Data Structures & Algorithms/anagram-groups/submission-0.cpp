class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        
        unordered_map<string/*key*/, vector<string> /*value i.e vector of grouped anagrams*/>mpp;

        for(int i=0; i<n; i++){
            string temp=strs[i];
            sort(temp.begin(), temp.end());
            mpp[temp].push_back(strs[i]);
        }

        vector<vector<string>>ans; //stores final grouped anagrams

        for(auto it:mpp){
            ans.push_back(it.second);
        }

        return ans;
        

    }
};
