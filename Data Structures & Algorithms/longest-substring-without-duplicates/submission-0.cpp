class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_set<char>st;
        int left=0, right=0;
        int maxLen=0;

        for(right=0; right<n; right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxLen=max(maxLen, right-left+1);
        }

        return maxLen;
    }
};
