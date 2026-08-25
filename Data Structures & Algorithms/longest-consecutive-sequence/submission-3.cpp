class Solution {
public:
    int checkConsecutive(map<int,int>& mp){
        int length=0;
        int ans=0;
        int prev=INT_MIN,current=INT_MIN;
        for(auto it:mp){
            current=it.first;
            if(current !=INT_MIN && prev!=INT_MIN && prev==current-1){
                length++;
                ans=max(ans,length);
            }
            else{
                length=0;
            }
            prev=current;
            // cout<<prev<<" "<<current<<" "<<length<<endl; 
        }
        
        return ans+1;
    }
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
            return nums.size();
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        return checkConsecutive(mp);
        // for(auto it:mp){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        // return nums[0];
    }
};
