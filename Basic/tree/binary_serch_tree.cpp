#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
};

void inorder(node* t) {
    if(t != NULL) {
        inorder(t->left);
        cout<<t->data<<" ";
        inorder(t->right);
    }
}

node* create(int key) {
    node* temp = new node;
    
    temp->data = key;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

node* insert(node* root,int key) {
    if(root==NULL)
    {
        return create(key);
    }
    if(key > root->data) {
        root->right = insert(root->right,key);
    }
    else if(key < root->data) {
        root->left = insert(root->left,key);
    }
    
    return root;
}

int main() {
    int t;
    cin>>t;
    
    node* root = NULL;
    for(int i=0;i<t;i++)
    {
        int key;
        cin>>key;
        
        root = insert(root,key);
    }
    inorder(root);
    cout<<endl;
    
    return 0;
}