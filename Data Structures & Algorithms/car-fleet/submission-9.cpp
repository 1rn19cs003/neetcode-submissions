class Solution {
   public:
    static bool compareByC(const pair<int, double>& p1, const pair<int, double>& p2) {
        return p1.first > p2.first;
    }
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> vect;
        if (position.size() == 1) {
            return 1;
        }
        for (int i = 0; i < position.size(); i++) {
            int a = position[i];
            double time = (double)(target - a) / speed[i];
            vect.push_back({a, time});
        }
        sort(vect.begin(), vect.end(), compareByC);
        double maxTime = 0.0; 
        int ans = 0;
        
        for (int i = 0; i < vect.size(); i++) {
            double currentTime = vect[i].second;
            if (currentTime > maxTime) {
                ans++;
                maxTime = currentTime; 
            }
        }
        
        for (auto& item : vect) {
            int a = item.first;
            int b = item.second;
            cout << "{" << a << "," << b << "}" << endl;
        }
        return ans;
    }
};
