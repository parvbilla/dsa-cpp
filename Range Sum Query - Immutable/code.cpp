#include <iostream>
#include <vector>
using namespace std;

vector<int> createPrefix(vector<int>& nums) {
    vector<int> prefix(nums.size() + 1, 0);

    for (int i = 0; i < nums.size(); i++) {
        prefix[i + 1] = prefix[i] + nums[i];
    }

    return prefix;
}

int sumRange(vector<int>& prefix, int left, int right) {
    return prefix[right + 1] - prefix[left];
}

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};

    vector<int> prefix = createPrefix(nums);

    cout << sumRange(prefix, 0, 2) << endl;
    cout << sumRange(prefix, 2, 5) << endl;
    cout << sumRange(prefix, 0, 5) << endl;

    return 0;
}