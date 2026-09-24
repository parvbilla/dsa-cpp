#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProductSubArray(vector<int> &arr) {
    int maxEnding = arr[0];
    int minEnding = arr[0];
    int ans = arr[0];

    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int oldMax = maxEnding;
        int oldMin = minEnding;

        maxEnding = max(arr[i], max(arr[i] * oldMax, arr[i] * oldMin));

        minEnding = min(arr[i], min(arr[i] * oldMax, arr[i] * oldMin));

        ans = max(ans, maxEnding);
    }

    return ans;
}

int main() {
    vector<int> arr = {-2, 3, -4};

    int result = maxProductSubArray(arr);

    cout << "Maximum Product Subarray: " << result << endl;

    return 0;
}