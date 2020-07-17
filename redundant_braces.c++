#include <iostream>
#include <stack>
#include <unordered_set>

using namespace std;

bool has_redundant_braces(string exp) {
    unordered_set<char> LIST_OF_OPS = {'+', '-', '*', '/', '(', ')'};
    stack<char> read_exp;
    for (char ch : exp) {
        if (LIST_OF_OPS.find(ch) != LIST_OF_OPS.end()) {
            if (ch == ')') {
                if (read_exp.top() == '(') {
                    return true;
                }
                while (read_exp.top() != '(') {
                    read_exp.pop();
                }
                read_exp.pop();
            } else {
                read_exp.push(ch);
            }
        }
    }
    return false;
}

int main(int argc, char *argv[]) {
    string exp;
    cin >> exp;
    cout << (has_redundant_braces(exp)) ? 1 : 0;
    return 0;
}