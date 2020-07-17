#include <iostream>
#include <stack>

using namespace std;

string decode_string(string seq) {
    int pos = 0;
    string decoded = "";
    stack<int> read_seq;
    for (pos; pos <= seq.length(); ++pos) {
        read_seq.push(pos + 1);
        if ((seq[pos] == 'I') || (pos == seq.length())) {
            while (!read_seq.empty()) {
                decoded += to_string(read_seq.top());
                read_seq.pop();
            }
        }
    }
    return decoded;
}

int main(int argc, char *argv[]) {
    string seq;
    cin >> seq;
    cout << decode_string(seq);
    return 0;
}
