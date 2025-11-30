#include <iostream>
using namespace std;

struct node {
    int data;
    node* link;
} *head = nullptr;

void push(int d){
    node* p = new node;
    p->data = d;
    p->link = head;
    head = p;
}

void pop(){
    if(head == nullptr){
        cout << "underflow\n";
    } else {
        node* temp = head;
        head = head->link;
        delete temp;
    }
}

void display(){
    if(head == nullptr){
        cout << "stack empty\n";
    } else {
        node* temp = head;
        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << "\n";
    }
}

int main(){
    int ch;
    do{
        cin >> ch;
        switch(ch){
            case 1:
                int d;
                cin >> d;
                push(d);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
        }
    } while(ch != 0);
    return 0;
}
