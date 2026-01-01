1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5
6        for (char ch : s) {
7            if (ch == '(' || ch == '{' || ch == '[') {
8                st.push(ch);
9            }
10            else {
11                if (st.empty()) return false;
12
13                char top = st.top();
14                st.pop();
15
16                if ((ch == ')' && top != '(') ||
17                    (ch == '}' && top != '{') ||
18                    (ch == ']' && top != '[')) {
19                    return false;
20                }
21            }
22        }
23
24        return st.empty();
25    }
26};
27