class Solution {
   public:
    int check(string s) {
        if (s == "+" || s == "-" || s == "*" || s == "/") return true;
        return false;
    }
    int op(string s, int a, int b) {
        if (s == "+") return a + b;
        if (s == "-") return a - b;
        if (s == "*") return a * b;
        if (s == "/") return a / b;
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        vector<string> ops = {"+", "-", "*", "/"};
        stack<int> st;
        // int i = 0;
        // st.push(0);
        // st.push(stoi(tokens[0]));
        for (int i = 0; i < tokens.size(); i++) {
            string num = tokens[i];
            // cout << "nums " << num << endl;
            if (check(num)) {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int ans = op(num, b, a);
                // cout << a << " " << b << " ops " << num<< " " << ans << endl;
                st.push(ans);
                // cout << st.size() << " " << st.top() << endl;
            } else {
                // cout << "it=> " << *it << endl;
                st.push(stoi(num));
            }
            // st.push(stoi(tokens[i]));
            // i++;
        }
        int resp=st.top();
        // cout << st.size()<<" "<< st.top()<< endl;

        return resp;
    }
};
