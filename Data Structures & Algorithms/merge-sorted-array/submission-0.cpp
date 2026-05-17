class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int i=m-1;//last valid element of arr1
        int j=n-1;//last valid element of arr2
        int k=m+n-1;/*last element of arr1 : we use this to fill arr1 from the back to ensure to 
        extra array usage */

        while(i>=0 && j>=0){
            if(arr1[i]>arr2[j]){
                arr1[k]=arr1[i];
                i--;
            }
            else{
                arr1[k]=arr2[j];
                j--;
            }
            k--;
        }

        while(j>=0){
            arr1[k]=arr2[j];
            j--;
            k--;
        }


    }
};