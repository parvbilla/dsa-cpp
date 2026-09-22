#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySum(vector<int>& arr, int k) {
    int n = arr.size();
    int low = 0;
    int high = k - 1;
    int sum = 0;

    for (int i = low; i <= high; i++) {
        sum += arr[i];
    }

    int res = sum;

    while (high < n - 1) {
        low++;
        high++;

        sum = sum - arr[low - 1];
        sum = sum + arr[high];

        res = max(res, sum);
    }

    return res;
}

int main() {
    vector<int> arr = {2, 5, 1, 8, 2, 9, 1};
    int k = 3;

    cout << maxSubarraySum(arr, k);

    return 0;
}