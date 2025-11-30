 #include <cmath>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
  struct node{
        int data;
        node* link;
    }*head=nullptr;
  
    struct node*create(int data){
        node *new1;
        new1=new node;
        new1 -> data=data;
        new1 -> link=nullptr;
        
        return new1;
    }

    void insert_at_front(int d){
        struct node *t;
        t=create(d);
        
        if(head==nullptr)
            head=t;
        
        else{
            t->link=head;
            head=t;
        }
    }
    void insert_at_end(int d){
         struct node *t;
        t=create(d);
        
        if(head==nullptr)
            head=t;
        
        else{
            struct node* temp;
            temp=head;
            
            while(temp->link!=nullptr){
                temp=temp->link;
            }
            temp -> link=t;
        }
    }

    void delet_front(){
        if (head == nullptr) {
            cout << "List is Empty" << endl;
        }
        
        else{
            node* temp=head;
            head=head->link;
            free(temp);
        }
    }

void delete_last() {
    if (head == nullptr) {
        cout << "List is Empty" << endl;
    } 
    else if (head->link == nullptr) {
        free(head);
        head = nullptr;
    } 
    else {
        node* temp = head;
        node* prev = nullptr;
        while (temp->link != nullptr) {
            prev = temp;
            temp = temp->link;
        }
        prev->link = nullptr;
        free(temp);
    }
}

    void insert_mid_node(int l,int d){
        node* t;
        node* temp=head;
        node* pre=head;
        t=create(d);
        
        while(temp->data!=l){
            temp=temp->link;
            pre=pre->link;
        }
        temp=temp->link;
        pre->link=t;
        t->link=temp;
    }
    void display() {
        if (head == nullptr) {
            cout << "List is Empty";
        }
        node* t = head;
        while (t != nullptr){
            cout << t->data << " ";
            t = t->link;
        }
        cout << endl;
    }

    

int main() {
    int ch;
    do
    {
    cin>>ch;
    switch(ch){
      
        case 1:
            { int value;
              cin>>value;
              insert_at_front(value);
              break;
            }
        case 2:
            {  int value;
              cin>>value;
              insert_at_end(value);
              break;
            }
            case 3:
            {  int value,last;
              cin>>last;
              cin>>value;
              insert_mid_node(last,value);
              break;
            }
        case 4:
            {
               delet_front();
               break;
            }
        case 5:
            {
                delete_last();
                break;
            }
        
        case 6:
            {
              display();  
              break;
            }
        case 0:
            {
                exit(0);
            }
    }
    }while(ch!=0);
    return 0;
}