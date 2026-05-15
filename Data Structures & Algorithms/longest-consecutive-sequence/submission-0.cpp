class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();

        unordered_set<int>st;  

        for(int num: arr){
            st.insert(num);
        }

        int longest=0; //keep track of longest sequence

        for(int num:st){
            if(st.find(num-1)==st.end()){
                int curr=num; //curr pointer keeps track of the elements 
                int len=1; //len keeps track of the current length of sequence

                while(st.find(curr+1)!=st.end()){
                    curr++;
                    len++;
                }
                longest=max(longest,len);
            }
        }
        return longest;
    }
};
