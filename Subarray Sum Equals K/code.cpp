#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subArraySum(vector<int>& nums, int k) {
    int n = nums.size();

    unordered_map<int, int> mp;

    int ans = 0;
    int sum = 0;

    mp[0] = 1;

    for (int i = 0; i < n; i++) {
        sum += nums[i];

        int required = sum - k;

        ans += mp[required];

        mp[sum]++;
    }

    return ans;
}

int main() {

    vector<int> nums = {1, 1, 1};
    int k = 2;

    int result = subArraySum(nums, k);

    cout << "Number of subarrays: " << result << endl;

    return 0;
}