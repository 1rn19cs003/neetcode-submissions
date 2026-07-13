class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        if(s.length!=t.length){
            return false;
        }
       let news=s.split("").sort().join("");
       let newt=t.split("").sort().join("");
       if(news===newt){
        return true;
       }
       return false;
    }
}
