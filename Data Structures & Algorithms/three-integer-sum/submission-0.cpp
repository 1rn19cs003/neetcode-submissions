class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> resp;
        vector<vector<int>> resp2;
        for (int i = 0; i < nums.size(); i++) {
            int l = i+1, r = nums.size() - 1;
            while (l < r) {
                if (l == i) {
                    l++;
                    continue;
                }
                if (r == i) {
                    r--;
                    continue;
                }
                if (nums[l] + nums[r] + nums[i] < 0)
                    l++;
                else if (nums[l] + nums[r] + nums[i] > 0)
                    r--;
                else if (nums[l] + nums[r] + nums[i] == 0) {
                    resp.insert({nums[l], nums[r], nums[i]});
                    l++;
                    r--;
                }
            }
        }
        for (const auto& row : resp) {
            resp2.push_back(row);
        }
        return resp2;
    }
};
