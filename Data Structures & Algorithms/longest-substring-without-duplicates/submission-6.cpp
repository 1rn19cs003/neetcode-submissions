class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() < 1) return 0;
        int l = 0, r = 1;
        unordered_map<char, int> mp;
        mp[s[0]]++;
        int max_len=1;
        while (r < s.size()) {
            if (mp[s[r]]>0) {
                mp[s[l]]--;
                l++;
            } else {
                mp[s[r]]++;
                max_len = max(max_len, r - l + 1);
                r++;
            }
        }
        return max_len;
    }
};
