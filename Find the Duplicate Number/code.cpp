#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int>& arr) {
    int slow = 0;
    int fast = 0;
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    slow = 0;

    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}

int main() {

    vector<int> arr = {1, 3, 4, 2, 2};

    int answer = findDuplicate(arr);

    cout << "Duplicate number: " << answer << endl;

    return 0;
}