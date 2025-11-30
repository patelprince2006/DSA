#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return -1;
}

string postfix(string s) {
    stack<char> st;
    string result;

     if (precedence(s[0]) != -1 || precedence(s[s.length() - 1]) != -1) {
        return "Invalid expression";
    }
    
    for (int i = 0; i < s.length(); i++) {
        char var = s[i];

        if ((var >= 'a' && var <= 'z') || (var >= 'A' && var <= 'Z') || (var >= '0' && var <= '9')) {
            result += var;
        }
        
        else if (var == '(') {
            st.push(var);
        }

        else if (var == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop();
        }

        else {
            while (!st.empty() && precedence(var) <= precedence(st.top())) {
                if (var == '^' && st.top() == '^') break;
                result += st.top();
                st.pop();
            }
            st.push(var);
        }
    }

    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;
}

int main() {
    string input;
    cin >> input;
    
    string result = postfix(input);
    cout << result << endl;
    return 0;
}
