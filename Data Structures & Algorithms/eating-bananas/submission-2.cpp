class Solution {
   public:
    long long canEat(int mid, vector<int>& piles, int h) {
        long long sumhr = 0;
        for (int i = 0; i < piles.size(); i++) {
            long long num = (piles[i] + mid - 1) / mid;
            sumhr += num;
        }
        return sumhr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        if (h == 1) return piles[0];
        long long num = -1;

        for (int i = 0; i < piles.size(); i++) {
            num = max((long long)piles[i], num);
        }
        int l = 1;
        int r = num;
        int val = INT_MAX;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int ans = canEat(mid, piles, h);
            if (ans <= h) {
                val = min(val, mid);
                r = mid - 1;
            } else
                l = mid + 1;
        }
        return val;
    }
};
