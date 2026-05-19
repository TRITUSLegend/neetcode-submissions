class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n=arr.size();

        unordered_map<int, int>mp;

        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        vector<int>ans;

        for(auto it:mp){
            if(it.second>n/3){
               ans.push_back(it.first); 
            }
        }

        return ans;

        
    }
};