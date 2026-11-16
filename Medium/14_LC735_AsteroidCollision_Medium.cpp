// LeetCode 735: Asteroid Collision (Medium)
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int> st;
        
        for(int i = 0; i < asteroids.size(); i++)
        {
            int x = asteroids[i];
            
            bool destroy = false;
            
            while(!st.empty() && st.top() > 0 && x < 0)
            {
                if(st.top() < -x)
                {
                    st.pop();
                }
                else if(st.top() == -x)
                {
                    st.pop();
                    destroy = true;
                    break;
                }
                else
                {
                    destroy = true;
                    break;
                }
            }
            
            if(!destroy)
            {
                st.push(x);
            }
        }
        
        vector<int> ans(st.size());
        
        for(int i = st.size() - 1; i >= 0; i--)
        {
            ans[i] = st.top();
            st.pop();
        }
        
        return ans;
    }
};
