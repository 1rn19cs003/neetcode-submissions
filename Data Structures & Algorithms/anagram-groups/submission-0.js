class Solution {
    /**
     * @param {string[]} strs
     * @return {string[][]}
     */
    groupAnagrams(strs) {
        let newAn = new Map();
        for (let i = 0; i < strs.length; i++) {
            let newStr = strs[i];
            let keyStr = newStr.split("").sort().join("");
            let val = newAn.get(keyStr) || [];
            val.push(newStr);
            newAn.set(keyStr, val);
        }
        let newAn2 = [];
        newAn.forEach((k, v) => {
            newAn2.push(k);
        });
        return newAn2;
    }
}
