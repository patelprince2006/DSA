 #include <cmath>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
  struct node{
        int data;
        node* next;
        node* pre;
    }*lptr=nullptr,*rptr=nullptr;
  
    struct node*create(int data){
        node *new1;
        new1=new node;
        new1 -> data=data;
        new1 -> next=nullptr;
        new1 -> pre=nullptr;
        
        return new1;
    }

    void insert_at_front(int d){
        struct node *t;
        t=create(d);
        
        if(lptr==nullptr){
           lptr=t;
            rptr=t;
        }
        
        else{
            lptr->pre=t;
            t->next=lptr;
            lptr=t;
        }
      }
    void insert_at_end(int d){
         struct node *t;
        t=create(d);
        
        if(lptr==nullptr)
        {
            lptr=t;
            rptr=t;
        }
        
        else{
            rptr->next=t;
            t -> pre=rptr;
            rptr=t;
        }
    }

    void delet_front(){
        if (lptr == nullptr) {
            cout << "List is Empty" << endl;
        }
        
        else{
            node* temp=lptr;
            lptr=lptr->next;
            temp->pre=nullptr;
            free(temp);
        }
    }

void delete_last() {
    if (rptr == nullptr) {
        cout << "List is Empty" << endl;
    } 
    else if (rptr->pre == nullptr) {
        free(rptr);
        rptr = nullptr;
    } 
    else {
        node* temp=rptr;
        rptr=rptr->pre;
        rptr->next=nullptr;
        free(temp);
    }
}

    void insert_mid_node(int l,int d){
        node* t;
        node* temp=lptr;
        node* prev=lptr;
        t=create(d);
        
        while(temp->data!=l){
            temp=temp->next;
            prev=prev->next;
        }
        temp=temp->next;
        temp->pre=t;
        prev->next=t;
        t->pre=prev;
        t->next=temp;
    }

    void display() {
        if (rptr == nullptr) {
            cout << "List is Empty";
        }
        else{
        node* t=lptr;
        while (t != nullptr){
            cout << t->data << " ";
            t = t->next;
        }
        
        cout << endl;
        }
    }

    void count(){
         if (rptr == nullptr) {
            cout << "List is Empty";
        }
        else{
         int count=0;
        node* t=lptr;
        while (t != nullptr){
            count++;
            t = t->next;
        }
        cout <<count;
        }
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
            {
               delet_front();
               break;
            }
        case 4:
            {
                delete_last();
                break;
            }
        
            case 5:
            {  int value,last;
              cin>>last;
              cin>>value;
              insert_mid_node(last,value);
              break;
            }
            
        case 6:
            {
              display();  
              break;
            }
        
        case 7:
            {
                count();
            }
        case 0:
            {
                exit(0);
            }
    }
    }while(ch!=0);
    return 0;
}