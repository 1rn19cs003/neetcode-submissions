class Solution {
   public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int add = 1;
        vector<int> ans(digits.size() + 1, 0);
        for (int i = digits.size(); i > 0; i--) {
            int sum = digits[i - 1] + carry + add;
            if (sum >= 10) {
                carry = 1;
                sum = sum % 10;
            } else {
                carry = 0;
            };
            ans[i] = sum;
            add = 0;
        }
        if(carry==1)
            ans[0]=1;
        vector<int> result;
        for(int i=0;i<ans.size();i++){
            if(i==0 && ans[i]==0)
                continue;
            result.push_back(ans[i]);
        }
        return result;
    }
};
