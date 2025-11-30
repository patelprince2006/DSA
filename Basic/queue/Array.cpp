#include <iostream>
using namespace std;

int front = -1, rear = -1;
int q[500];
int n;

void Qenqueue(int item) {
    if (rear == n - 1) {
        cout << "Queue Overflow" << endl;
    } else {
        if (front == -1) front = 0; // first element
        rear = rear + 1;
        q[rear] = item;
    }
}

void Qdequeue() {
    if (front == -1) {
        cout << -1 << endl;
    } else {
        int item = q[front];
        cout << item << endl;  // if you want to print dequeued item
        if (front == rear) {
            front = rear = -1;
        } else {
            front = front + 1;
        }
    }
}

void peek() {
    if (front == -1) {
        cout << "-1" << endl;
    } else {
        cout << q[front] << endl;
    }
}

void isempty(){
    if (front == -1) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
}

int main() {
    int ch;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> ch;
        switch (ch) {
            case 1: {
                int it;
                cin >> it;
                Qenqueue(it);
                break;
            }
            case 2: {
                Qdequeue();
                break;
            }
            case 3: {
                peek();
                break;
            }
            case 4:{
                isempty();
            }
        }
    }
    return 0;
}
