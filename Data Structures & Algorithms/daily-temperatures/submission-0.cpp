class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;//stores the index of the warmer temp. 
        int n=temperatures.size();
        vector<int>ans(n);

        for(int i=n-1; i>=0; i--){
            int curr=temperatures[i];
            while(!st.empty() && temperatures[st.top()]<=curr){
                st.pop();
            }
            if(st.empty()){
                ans[i]=0;
            }
            else{
                ans[i]=st.top()-i;
            }

            st.push(i);
        }

        return ans;
    }
};
