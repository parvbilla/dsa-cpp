#include <iostream>

using namespace std;

int nextNumber(int n) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }

    return sum;
}

bool happyNumber(int n) {
    int slow = n;
    int fast = n;

    do {
        slow = nextNumber(slow);
        fast = nextNumber(nextNumber(fast));
    } while (slow != fast);

    return slow == 1;
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (happyNumber(n)) {
        cout << "Happy Number" << endl;
    } else {
        cout << "Not a Happy Number" << endl;
    }

    return 0;
}