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
            console.log(check.has(nums[n]), nums[n]);
            if (check.has(nums[n])) {
                return [check.get(nums[n]), n];
            }
            check.set(newTarget, n);
        }
        // check.forEach((key, value) => {
        //     console.log(key, value);
        // });
        // for( mp in check){
        //     console.log(mp[i]);
        // }
        return [0, 0];
    }
}
