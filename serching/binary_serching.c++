#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    int roll_no[n];
    int s_time[n];

    for (int i = 0; i < n; i++) {
        cin >> roll_no[i] >> s_time[i];
    }

    cin >> key;

    int left = 0, right = n - 1, comparisons = 0;
    bool found = false;

    while (left <= right) {
        comparisons++;
        int mid = (left + right) / 2;

        if (roll_no[mid] == key) {
            cout << s_time[mid] << endl;
            cout << comparisons << endl;
            found = true;
            break;
        } else if (key < roll_no[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if (!found) {
        cout << "Not submitted" << endl;
    }

    return 0;
}

