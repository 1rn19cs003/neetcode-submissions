class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int ans=0;
        while(l<r){
            int num=min(heights[l],heights[r]);
            int gap=r-l;
            ans=max(ans,gap*num);
            cout<<ans<<" ";
            if(heights[l]<heights[r])
                l++;
            else
                r--;
        }
        return ans;
    }
};
