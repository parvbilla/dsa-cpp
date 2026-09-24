#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubArray(vector<int> &arr) {
    int n = arr.size();

    int bestEnding = arr[0];
    int ans = arr[0];

    for (int i = 1; i < n; i++) {
        int v1 = arr[i];
        int v2 = arr[i] + bestEnding;

        bestEnding = max(v1, v2);
        ans = max(ans, bestEnding);
    }

    return ans;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = maxSubArray(arr);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}