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
        for(int i=0;i<n;i++){
        int lowest_no = i;
       for(int j=i+1;j<n;j++){
           if(a[j]<a[lowest_no]){
              swap(a[j],a[lowest_no]);
           }
       }
         cout<<a[lowest_no]<<" ";
    }
      
    return 0;
}
