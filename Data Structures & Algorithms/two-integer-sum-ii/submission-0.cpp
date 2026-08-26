class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> ump;
        for(int i=0;i<numbers.size();i++){
            int val=target-numbers[i];
            if(ump.count(val)){
                cout<<ump[val]<<" "<<i+1<<endl;
                return {ump[val],i+1};
            }
            ump[numbers[i]]=i+1;
        }
        // cout<<"ump"<<endl;
        for(auto it:ump){
            
            // return{it.first+1,it.second};
            cout<<it.first<<" "<<it.second<<endl;
        }
        return {};
    }
};
