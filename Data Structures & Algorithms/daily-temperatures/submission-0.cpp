class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        // [30,38,30,36,35,40,28]
        // [28,30,30,35,36,38,40]
        stack<pair<int, int>> st;
        vector<int> ans(temp.size(),0);
        int j=0;
        for (int i = 0; i < temp.size(); i++) {
            while (!st.empty() && st.top().first < temp[i]) {
                cout << "popped {" << st.top().first << "," << st.top().second << "} "<< endl;
                ans[st.top().second] = i - st.top().second;
                st.pop();
            }
            st.push({temp[i], i});
            j++;
            // ans.push_back(cnt);
        }
        return ans;
    }
};
