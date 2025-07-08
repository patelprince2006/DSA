#include <iostream>
using namespace std;

void bubble_sort(int roll_no[], int sub_time[], int n, int &comp, int &swaps) {
    for (int i = 0; i < n - 1; i++) {
        bool exchanged = false;
        for (int j = 0; j < n - i - 1; j++) {
            comp++;
            if (sub_time[j] > sub_time[j + 1]) {
                swap(sub_time[j], sub_time[j + 1]);
                swap(roll_no[j], roll_no[j + 1]);
                swaps++;
                exchanged = true;
            }
        }
        if (!exchanged) break;
    }
}

void selection_sort(int roll_no[], int sub_time[], int n, int &comp, int &swaps) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            comp++;
            if (sub_time[j] < sub_time[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(sub_time[i], sub_time[min_idx]);
            swap(roll_no[i], roll_no[min_idx]);
            swaps++;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int roll_no[50], sub_time[50];
    for (int i = 0; i < n; i++) {
        cin >> roll_no[i] >> sub_time[i];
    }

    int choice;
    cin >> choice;

    int comp = 0, swaps = 0;

    if (choice == 1)
        bubble_sort(roll_no, sub_time, n, comp, swaps);
    else
        selection_sort(roll_no, sub_time, n, comp, swaps);

    for (int i = 0; i < n; i++) {
        cout << roll_no[i] << " " << sub_time[i] << endl;
    }

    cout << comp << endl;
    cout << swaps << endl;
    cout << roll_no[0] << "," << roll_no[1] << endl;

    return 0;
}
