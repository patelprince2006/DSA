#include <iostream>
using namespace std;

int main(){
    int n,key;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==key){
                cout<<i<<","<<j;
            }
        }
    }
    return 0;
}