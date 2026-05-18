class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        int res=INT_MAX;
        int l=0;

        for(int r=0; r<n; r++){
            sum+=arr[r];
            while(sum>=target){
                res=min(res, r-l+1);
                sum-=arr[l];
                l++;
            }
        }

        if(res==INT_MAX){
            return 0;
        }
        else{
            return res;
        }
    }
};