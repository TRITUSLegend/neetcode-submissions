class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n=arr.size();
        unordered_set<int>st;

        for(int i=0; i<n; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(arr[j]==arr[i]){
                    cnt++;
                }
            }
            if(cnt>n/3){
                st.insert(arr[i]);
            }
        }
        vector<int>ans(st.begin(), st.end());
        
        return ans;
    }
};