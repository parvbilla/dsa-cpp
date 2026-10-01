#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int findMaxLength(vector<int>& nums) {
    int zero = 0;
    int one = 0;
    int ans = 0;

    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0)
            zero++;
        else
            one++;

        int diff = zero - one;

        if (diff == 0) {
            ans = max(ans, i + 1);
        }
        else if (mp.find(diff) == mp.end()) {
            mp[diff] = i;
        }
        else {
            int len = i - mp[diff];
            ans = max(ans, len);
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {0, 1, 0, 1, 1, 0};

    cout << findMaxLength(nums) << endl;

    return 0;
}