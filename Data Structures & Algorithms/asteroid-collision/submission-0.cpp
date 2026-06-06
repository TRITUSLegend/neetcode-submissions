class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>ans;
        int n=asteroids.size();

        for(int i=0; i<n; i++){
            int curr=asteroids[i];
            bool alive=true;

            while(!st.empty() && st.top()>0 && curr<0){//this is the only condn when collision can happen
                if(abs(st.top())>abs(curr)){
                    alive=false;
                    break;
                } 
                else if(abs(st.top())<abs(curr)){
                    st.pop();
                }
                else if(abs(st.top())==abs(curr)){
                    st.pop();
                    alive=false;
                    break;
                }
            }
            if(alive){
                st.push(curr);
            }
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};