#include <cmath>
#include <cstdio>
#include <vector>
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
    //bubbule sort
    // for(int j=0;j<n;j++){
    // for(int i=0;i<n-i;i++){
    //     if(a[i]>a[i+1]){
    //         swap(a[i],a[i+1]);
    //     }
    // }
    //  cout<<a[j]<<" ";
    // }
    
    //selection sort
    // for(int i=0;i<n;i++){
    //     int lowest_no = i;
    //    for(int j=i+1;j<n;j++){
    //        if(a[j]<a[lowest_no]){
    //           swap(a[j],a[lowest_no]);
    //        }
    //    }
    //      cout<<a[lowest_no]<<" ";
    // }
    
    //insertion sort
    for(int i=1;i<n;i++){
        int curr=a[i];
        int pre=i-1;
       while(pre>=0 && a[pre]>curr){
           a[pre+1]=a[pre];
           pre--;   
       }
        a[pre +1]=curr;
    }
      for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
