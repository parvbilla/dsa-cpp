#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merger(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());

    int n = intervals.size();

    int start = intervals[0][0];
    int end = intervals[0][1];

    vector<vector<int>> result;

    for (int i = 1; i < n; i++) {
        int nextStart = intervals[i][0];
        int nextEnd = intervals[i][1];

        if (end >= nextStart) {
            end = max(end, nextEnd);
        } else {
            result.push_back({start, end});
            start = nextStart;
            end = nextEnd;
        }
    }

    result.push_back({start, end});

    return result;
}

int main() {
    vector<vector<int>> intervals = {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18}
    };

    vector<vector<int>> result = merger(intervals);

    for (auto interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }

    return 0;
}