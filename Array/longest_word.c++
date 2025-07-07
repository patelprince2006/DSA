#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
   getline(cin, line);
    cin>>line;

    int maxLen = 0;
    int currLen = 0;

    for (int i = 0; i < line.length(); i++) {
        if (line[i] != ' ' ) {
            currLen++;
        } else {
               
                maxLen = max(maxLen,currLen);
               currLen = 0;
        }
    }
    
    
    cout<<max(maxLen,currLen)<< endl;
    return 0;
}