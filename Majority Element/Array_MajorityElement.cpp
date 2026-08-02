#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;
    int element = 0;

    for (int num : nums) {
        if (count == 0) {
            element = num;
        }

        if (element == num) {
            count++;
        } else {
            count--;
        }
    }

    return element;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority Element: " << majorityElement(nums);

    return 0;
}