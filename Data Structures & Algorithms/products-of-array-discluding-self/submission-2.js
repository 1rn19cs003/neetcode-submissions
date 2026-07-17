class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    productExceptSelf(nums) {
        let totalProduct = 1;
        let hasZero = false;
        let cnt = 0;
        for (let i = 0; i < nums.length; i++) {
            if (nums[i] == 0) {
                hasZero = true;
                cnt++;
                continue;
            }
            totalProduct = totalProduct * nums[i];
        }
        let ans = [];
        if (cnt > 1) {
            for (let i = 0; i < nums.length; i++) {
                ans.push(0);
            }
            return ans;
        }
        console.log(totalProduct);
        for (let i = 0; i < nums.length; i++) {
            if (nums[i] == 0) {
                ans.push(totalProduct);
            } else {
                if (hasZero) ans.push(0);
                else ans.push(totalProduct / nums[i]);
            }
        }
        return ans;
    }
}
