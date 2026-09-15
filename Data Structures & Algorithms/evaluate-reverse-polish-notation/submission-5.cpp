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
        for (int i = 0; i < tokens.size(); i++) {
            string num = tokens[i];
            if (check(num)) {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int ans = op(num, b, a);
                st.push(ans);
            } else
                st.push(stoi(num));
        }

        return st.top();
    }
};
