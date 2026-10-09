
#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
    stack<char> st;

    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }

    string ans;

    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {
    string s = "abbaca";

    cout << removeDuplicates(s) << endl;

    return 0;
}
