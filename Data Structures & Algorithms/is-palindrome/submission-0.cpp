class Solution {
public:
    bool isPalindrome(string s) {

        int low = 0;
        int high = s.size() - 1;

        while(low < high){

            // Skip non-alphanumeric
            while(low < high && !isalnum(s[low])){
                low++;
            }

            while(low < high && !isalnum(s[high])){
                high--;
            }

            // Compare lowercase versions
            if(tolower(s[low]) != tolower(s[high])){

                return false;
            }

            low++;
            high--;
        }

        return true;
    }
};