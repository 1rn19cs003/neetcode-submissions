class Solution {
   public:
    int trap(vector<int>& height) {
        // height = [0,2,0,3,1,0,1,3,2,1]
        // leftMx = [0,2,2,3,3,3,3,3,3,3]
        // rightMx =[3,3,3,3,3,3,3,3,2,1]
        // 2+2+3+2+
        vector<int> leftMx;
        vector<int> rightMx;
        int ans = 0;
        int size = height.size() - 1;
        int lmx = height[0], rmx = height[size];
        for (int i = 0; i < size + 1; i++) {
            lmx = max(lmx, height[i]);
            rmx = max(rmx, height[size - i]);
            leftMx.push_back(lmx);
            rightMx.push_back(rmx);
        }
        for (int i = 0; i < height.size(); i++) {
            int mn=min(leftMx[i],rightMx[size-i]);
            ans=ans+abs(mn-height[i]);
        }
        return ans;
    }
};
