#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int circularSumArray(vector<int> &arr) {
    int n = arr.size();

    int maxEnding = arr[0];
    int minEnding = arr[0];

    int maxSum = arr[0];
    int minSum = arr[0];

    int totalSum = arr[0];

    for (int i = 1; i < n; i++) {
        totalSum += arr[i];

        maxEnding = max(arr[i], arr[i] + maxEnding);
        minEnding = min(arr[i], arr[i] + minEnding);

        maxSum = max(maxSum, maxEnding);
        minSum = min(minSum, minEnding);
    }

    if (maxSum < 0) {
        return maxSum;
    }

    int circularSum = totalSum - minSum;

    return max(maxSum, circularSum);
}

int main() {
    vector<int> arr = {5, -2, 3, 4};

    cout << circularSumArray(arr) << endl;

    return 0;
}