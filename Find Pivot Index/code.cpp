#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& arr) {
    int leftSum = 0;
    int rightSum = 0;
    int totalSum = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            return i;
        }

        leftSum += arr[i];
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 7, 3, 6, 5, 6};

    cout << pivotIndex(arr) << endl;

    return 0;
}