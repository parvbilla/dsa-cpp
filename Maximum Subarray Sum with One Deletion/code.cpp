#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumSum(vector<int>& arr) {
    int n = arr.size();

    int noDelete = arr[0];
    int oneDelete = -1000000000;

    int ans = arr[0];

    for (int i = 1; i < n; i++) {
        int prevNoDelete = noDelete;
        int prevOneDelete = oneDelete;

        noDelete = max(arr[i], prevNoDelete + arr[i]);

        oneDelete = max(prevOneDelete + arr[i],
                        prevNoDelete);

        ans = max(ans, max(noDelete, oneDelete));
    }

    return ans;
}

int main() {
    vector<int> arr = {1, -2, 3};

    int result = maximumSum(arr);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}