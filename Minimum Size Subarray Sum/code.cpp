#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minSubArrayLen(int target, vector<int>& arr) {

    int low = 0;
    int sum = 0;
    int ans = INT_MAX;

    for (int high = 0; high < arr.size(); high++) {

        sum += arr[high];

        while (sum >= target) {

            int len = high - low + 1;

            ans = min(ans, len);

            sum -= arr[low];
            low++;
        }
    }

    return ans == INT_MAX ? 0 : ans;
}

int main() {

    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int target = 7;

    cout << minSubArrayLen(target, arr);

    return 0;
}