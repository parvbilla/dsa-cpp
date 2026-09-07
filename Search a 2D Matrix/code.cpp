#include <iostream>
#include <vector>
using namespace std;


// Binary Search in a particular row
bool searchInRow(vector<vector<int>>& mat, int target, int row) {

    int n = mat[0].size();

    int st = 0;
    int end = n - 1;

    while (st <= end) {

        int mid = st + (end - st) / 2;

        if (target == mat[row][mid]) {
            return true;
        }
        else if (target > mat[row][mid]) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return false;
}


// Binary Search on rows
bool searchMatrix(vector<vector<int>>& mat, int target) {

    int m = mat.size();
    int n = mat[0].size();

    int startRow = 0;
    int endRow = m - 1;

    while (startRow <= endRow) {

        int midRow = startRow + (endRow - startRow) / 2;

        // Target can be present in this row
        if (target >= mat[midRow][0] &&
            target <= mat[midRow][n - 1]) {

            return searchInRow(mat, target, midRow);
        }

        // Target is in lower rows
        else if (target > mat[midRow][n - 1]) {

            startRow = midRow + 1;
        }

        // Target is in upper rows
        else {

            endRow = midRow - 1;
        }
    }

    return false;
}


int main() {

    vector<vector<int>> mat = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 34;

    if (searchMatrix(mat, target)) {
        cout << "Target Found" << endl;
    }
    else {
        cout << "Target Not Found" << endl;
    }

    return 0;
}