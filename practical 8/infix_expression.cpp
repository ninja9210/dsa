#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

// Function to check if the given character is an operator
bool isOperator(char c) {
    return (!isalpha(c) && !isdigit(c));
}

// Function to get the precedence of an operator
int getPrecedence(char c) {
    if (c == '+' || c == '-') {
        return 1;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '^') {
        return 3;
    }
    return 0;
}

// Function to convert infix to prefix expression
string infixToPrefix(string infix) {
    // Reverse the infix expression
    reverse(infix.begin(), infix.end());

    // Replace '(' with ')' and vice versa
    for (int i = 0; i < infix.size(); i++) {
        if (infix[i] == '(') {
            infix[i] = ')';
        } else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }

    stack<char> s;
    string prefix;

    for (int i = 0; i < infix.size(); i++) {
        if (isalpha(infix[i]) || isdigit(infix[i])) {
            prefix += infix[i];
        } else if (infix[i] == '(') {
            s.push(infix[i]);
        } else if (infix[i] == ')') {
            while (!s.empty() && s.top() != '(') {
                prefix += s.top();
                s.pop();
            }
            s.pop();
        } else {
            while (!s.empty() && getPrecedence(infix[i]) <= getPrecedence(s.top())) {
                prefix += s.top();
                s.pop();
            }
            s.push(infix[i]);
        }
    }

    while (!s.empty()) {
        prefix += s.top();
        s.pop();
    }

    // Reverse the prefix expression
    reverse(prefix.begin(), prefix.end());

    return prefix;
}

int main() {
    string infix1 = "(A-B)*(D/E)";
    string infix2 = "(A+B^D)/(E-F)+G";
    string infix3 = "A*(B+D)/E-F*(G+H/K)";

    cout << "Prefix of " << infix1 << " : " << infixToPrefix(infix1) << endl;
    cout << "Prefix of " << infix2 << " : " << infixToPrefix(infix2) << endl;
    cout << "Prefix of " << infix3 << " : " << infixToPrefix(infix3) << endl;

    return 0;
}