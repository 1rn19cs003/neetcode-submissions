class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> vect;
        int ans = INT_MIN;
        unordered_map<int, int> mp;
        priority_queue<int> pq;
        for (int i = 0; i < k; i++) {
            mp[nums[i]]++;
            ans = max(ans, nums[i]);
            pq.push(nums[i]);
        }
        int r = k;
        int l = 1;
        vect.push_back(ans);
        while (r < nums.size()) {
            mp[nums[l - 1]]--;
            mp[nums[r]]++;
            pq.push(nums[r]);

            while (!pq.empty() && mp[pq.top()] <= 0) {
                pq.pop();
            }
            ans = pq.top();
            vect.push_back(ans);
            r++;
            l++;
        }
        return vect;
    }
};
