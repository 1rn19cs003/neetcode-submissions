class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int, int>> st;
        vector<int> ans(temp.size(),0);
        for (int i = 0; i < temp.size(); i++) {
            while (!st.empty() && st.top().first < temp[i]) {
                // cout << "popped {" << st.top().first << "," << st.top().second << "} "<< endl;
                ans[st.top().second] = i - st.top().second;
                st.pop();
            }
            st.push({temp[i], i});
        }
        return ans;
    }
};
