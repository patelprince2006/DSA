#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

    int a[100],top=-1;
    void push(int x)
    {   top++;
       a[top]=x;
    }
    
    void pop()
    {    
        if(top==-1){
            cout<<"-1"<<endl;
        }
        
        else{
            int temp=a[top];
            top--;
            cout<<temp<<endl;
        }
    }

   void peap(){
       int temp=a[top];
            cout<<temp<<endl;
   }
    
   void isempty(){
       if(top==-1){
           cout<<"1"<<endl;
       }
       
       else{
           cout<<"0"<<endl;
       }
   }

int main() {
    int m,ch;
    cin>>m;
    
    
    for(int i=0;i<m;i++){
    cin>>ch;
     switch(ch){
         case 1:
        {   int x;
            cin>>x;
            push(x);
           break;
        }
         case 2:
             {   
                 pop();
                 break;
             }
            
         case 3:
             {
                 peap();
                 break;
             }
         case 4:
             {
                 isempty();
                 break;
             }
     }
    }
    return 0;
}
