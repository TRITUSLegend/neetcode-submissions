class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        int cnt=1;
        sort(arr.begin(), arr.end());
        
        if(n==1){
                return arr[0];
            }

        for(int i=1; i<n; i++){
            if(arr[i]==arr[i-1]){
                cnt++;
            }
            else{
                cnt=1;
            }

            if(cnt>n/2){
                return arr[i];
            }
        }
        return -1; 
    }
};