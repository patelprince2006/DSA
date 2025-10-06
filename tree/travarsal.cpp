#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
using namespace std;

 struct node{
    int data;
     struct node* lptr;
     struct node* rptr;
    };
    
  struct node* create(){
      node* p;
      
      int x;
      
      cin>>x;
      
      if(x==-1){
          return nullptr;
      }
      p=new node;
       p->lptr=create();
      p->data=x;
     
      p->rptr=create();
      return p;
  } 
  
  void preorder(node* x){
      if(x!=nullptr){
          cout<<x->data<<" ";
          preorder(x->lptr);
          preorder(x->rptr);
      }
  }

  void postorder(node* x){
      if(x!=nullptr){
          
          postorder(x->lptr);
          postorder(x->rptr);
          cout<<x->data<<" ";
          
      }
  }

   void inorder(node* x){
      if(x!=nullptr){
         
          inorder(x->lptr);
           cout<<x->data<<" ";
          inorder(x->rptr);
          
      }
  }

  void level(node* root){
      queue<struct node*>q;
      q.push(root);
      while(!q.empty()){
          node* root=q.front();
          q.pop();
      
      
      cout<<root->data<<" ";
      
      if(root->lptr!=nullptr){
          q.push(root->lptr);
      }
      
      if(root->rptr!=nullptr){
          q.push(root->rptr);
      }
      }
  }

  

int main() {
     node* root;
    root=create();
    preorder(root);
    cout<<endl;
     inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    level(root);
    
    return 0;
}
