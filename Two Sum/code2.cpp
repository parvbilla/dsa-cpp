#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

pair<int, int> twoSum(vector<int> arr, int target) {

    vector<pair<int, int>> nums;
    for(int i = 0; i < arr.size(); i++) {
        nums.push_back({arr[i], i});
    }
    sort(nums.begin(), nums.end());
    int st = 0;
    int end = nums.size() - 1;
    while(st < end) {

        int sum = nums[st].first + nums[end].first;

        if(sum == target) {
            return {nums[st].second, nums[end].second};
        }
        else if(sum > target) {
            end--;
        }
        else {
            st++;
        }
    }

    return {-1, -1};
}

int main() {

    vector<int> arr = {5, 2, 11, 7, 15};

    pair<int, int> result = twoSum(arr, 9);

    cout << "First index :- " << result.first << endl;
    cout << "Second index :- " << result.second << endl;
}