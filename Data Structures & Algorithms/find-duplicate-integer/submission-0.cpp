class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0;
        int fast=0;
        while(true){
            slow=nums[slow];
            fast=nums[nums[fast]];
            if(slow==fast)
                break;
        }

        int sslow=0;
        while(true){
            slow=nums[slow];
            sslow=nums[sslow];
            if(slow==sslow)
                return slow;
        }

        cout<<slow<<" "<<sslow<<" "<<fast<<endl;
        return slow;
    }
};
