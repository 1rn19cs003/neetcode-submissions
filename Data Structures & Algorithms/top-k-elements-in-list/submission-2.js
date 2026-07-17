class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    topKFrequent(nums, k) {
        let mp = {};
        for (let n of nums) {
            if (mp[n] === undefined) {
                mp[n] = 0;
            }
            mp[n]++;

        }
        let ans = Object.keys(mp).sort((a, b) => mp[b] - mp[a]);
        
        return ans.slice(0, k).map(Number);
    }
}

