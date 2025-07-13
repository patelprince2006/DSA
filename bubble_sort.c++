#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int j=0;j<n;j++){
    for(int i=0;i<n-i;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
     cout<<a[j]<<" ";
    }

    return 0;
}