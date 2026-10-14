#include <bits/stdc++.h>
using namespace std;

vector<int> nxtGreaterElement(vector<int> num1, vector<int> num2) {
    unordered_map<int, int> mp;
    stack<int> st;

    for (int i = num2.size() - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= num2[i]) {
            st.pop();
        }

        if (!st.empty()) {
            mp[num2[i]] = st.top();
        } else {
            mp[num2[i]] = -1;
        }

        st.push(num2[i]);
    }

    vector<int> ans;

    for (int x : num1) {
        ans.push_back(mp[x]);
    }

    return ans;
}

int main() {
    vector<int> num1 = {4, 1, 2};
    vector<int> num2 = {1, 3, 4, 2};

    vector<int> ans = nxtGreaterElement(num1, num2);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}