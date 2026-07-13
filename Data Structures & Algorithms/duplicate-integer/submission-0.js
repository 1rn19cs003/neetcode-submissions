class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        let mp=new Map();
        for (let val of nums) {
            mp.set(val, (mp.get(val) || 0) + 1);
            if(mp.get(val) >1){
                return true;
            }
        }

        return false;
    }
}
