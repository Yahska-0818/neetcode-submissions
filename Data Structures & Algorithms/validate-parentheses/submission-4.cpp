class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> par;
        par['{'] = '}';
        par['('] = ')';
        par['['] = ']';

        for (char c : s) {
            if (par.find(c) != par.end()) {
                st.push(c);
            } else {
                if (st.empty() || par[st.top()] != c) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};