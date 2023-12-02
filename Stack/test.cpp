#include <iostream>
#include <stack>
#include <string>

bool isValidParentheses(const std::string& s) {
    std::stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else if (!st.empty() &&
                   ((c == ')' && st.top() == '(') ||
                    (c == '}' && st.top() == '{') ||
                    (c == ']' && st.top() == '['))) {
            st.pop();
        } else {
            return false; // mismatch or closing parenthesis without a corresponding opening one
        }
    }

    return st.empty(); // true if the stack is empty at the end
}

int main() {
    std::string input;
    std::cout << "Enter a string with parentheses: ";
    std::cin >> input;

    if (isValidParentheses(input)) {
        std::cout << "Valid parentheses." << std::endl;
    } else {
        std::cout << "Invalid parentheses." << std::endl;
    }

    return 0;
}
