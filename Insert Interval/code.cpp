#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> insertInterval(vector<vector<int>> intervals, vector<int> newInterval) {
    int inserted = false;

    int n = intervals.size();

    vector<vector<int>> result;

    for (int i = 0; i < n; i++) {
        if (inserted == false && intervals[i][0] >= newInterval[0]) {
            result.push_back(newInterval);
            inserted = true;
        }

        result.push_back(intervals[i]);
    }

    if (inserted == false) {
        result.push_back(newInterval);
    }

    int start = result[0][0];
    int end = result[0][1];

    vector<vector<int>> ans;

    int newN = result.size();

    for (int i = 1; i < newN; i++) {
        int newStart = result[i][0];
        int newEnd = result[i][1];

        if (end >= newStart) {
            end = max(end, newEnd);
        } else {
            ans.push_back({start, end});
            start = newStart;
            end = newEnd;
        }
    }

    ans.push_back({start, end});

    return ans;
}

int main() {
    vector<vector<int>> intervals = {
        {1, 3},
        {6, 7},
        {8, 10},
        {12, 16}
    };

    vector<int> newInterval = {4, 8};

    vector<vector<int>> result = insertInterval(intervals, newInterval);

    for (auto interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }

    return 0;
}