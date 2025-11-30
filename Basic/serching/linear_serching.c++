#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num,i;
    cin>>num;
    int n[num],x,comp=0;
    for(int i=0;i<num;i++){
        cin>>n[i];       
    }
    cin>>x;
    for(i=0;i<num;i++){
        if(n[i]==x){
            cout<<i<<endl;
            
            comp++;
            
            break;
        }
        else{
            comp++;
        }
    }

    if(comp==num){
       cout<<"Element "<<x<<" is not present in the array"<<endl;
    }
    cout<<comp;
    
   
    return 0;
}
