
#include <bits/stdc++.h>
using namespace std;

int minMeetingRoom(vector<int>& start, vector<int>& end) {
    int n = start.size();

    sort(start.begin(), start.end());
    sort(end.begin(), end.end());

    int i = 0, j = 0;
    int room = 0, ans = 0;

    while (i < n) {
        if (start[i] < end[j]) {
            room++;
            ans = max(ans, room);
            i++;
        } else {
            room--;
            j++;
        }
    }

    return ans;
}

int main() {
    vector<int> start = {2, 6, 9};
    vector<int> end = {4, 10, 12};

    cout << minMeetingRoom(start, end) << endl;

    return 0;
}
