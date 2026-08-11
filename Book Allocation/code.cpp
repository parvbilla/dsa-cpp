#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int maxPageAllowed) {
    int students = 1, pages = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] > maxPageAllowed) {
            return false;
        }

        if(pages + arr[i] <= maxPageAllowed) {
            pages += arr[i];
        }
        else {
            students++;
            pages = arr[i];
        }
    }

    return students <= m;
}

int allocateBooks(vector<int> arr, int books, int students) {

    if(students > books) {
        return -1;
    }

    int sum = 0;

    for(int i = 0; i < books; i++) {
        sum += arr[i];
    }

    int start = 0, end = sum, ans = -1;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(isValid(arr, books, students, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {2, 1, 3, 4};

    int books = 4;
    int students = 2;

    cout << allocateBooks(arr, books, students) << "\n";

    return 0;
}