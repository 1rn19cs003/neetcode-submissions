class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        let check = new Map();
        for (let n = 0; n < nums.length; n++) {
            let newTarget = target - nums[n];
            if (check.has(nums[n])){
                return [check.get(nums[n]),n];
            }
            check.set(newTarget,n);
        }
        return [0, 0];
    }
}
