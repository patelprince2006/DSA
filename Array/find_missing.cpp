#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> count(n + 1, 0);

    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] >= 1 && arr[i] <= n)
            count[arr[i]]++;
    }

    bool missingFound = false;

    for (int i = 1; i <= n; i++) {
        if (count[i] == 0) {
            cout << i << " ";
            missingFound = true;
        }
    }

    if (!missingFound) {
        cout << -1;
    }

    cout << endl;
    return 0;
}