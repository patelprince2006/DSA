#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int val) {
    node *newNode = new node();
    newNode->data = val;
    newNode->next = NULL;
    if (front == NULL && rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if (front == NULL) {
        cout << "-1" << endl;
    } else {
        node *temp = front;
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }
        cout<<temp->data<<endl;
        delete temp; 
    }
}

void peek() {
    if (front == NULL) {
        cout << "-1" << endl;
    } else {
        cout << front->data << endl;
    }
}

void isempty() {
    if (front == NULL) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
}

int main() {
    int n, ch;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ch;
        switch (ch) {
            case 1: {
                int it;
                cin >> it;
                enqueue(it);
                break;
            }
            case 2: {
                dequeue();
                break;
            }
            case 3: {
                peek();
                break;
            }
            case 4: {
                isempty();
                break;
            }
        }
    }
    return 0;
}
