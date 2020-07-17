/*
He knows some subset of the letter of Latin alphabet. In order to help Jeff to study, Chef gave him a book with the text consisting of N words. Jeff can read a word iff it consists only of the letters he knows.
Now Chef is curious about which words his brother will be able to read, and which are not. Please help him!
Input--
The first line of the input contains a lowercase Latin letter string S, consisting of the letters Jeff can read. Every letter will appear in S no more than once.
The second line of the input contains an integer N denoting the number of words in the book.
Each of the following N lines contains a single lowecase Latin letter string Wi, denoting the ith word in the book.

Output
For each of the words, output "Yes" (without quotes) in case Jeff can read it, and "No" (without quotes) otherwise.
*/

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

bool can_read(set<char>, string);

bool can_read(set<char> all_unique_letters, string word) {
    for (char c : word) {
        if (all_unique_letters.find(c) == all_unique_letters.end()) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[]) {
    string all_letters;
    int n;
    string word;
    cin >> all_letters;
    cin >> n;

    set<char> all_unique_letters(all_letters.begin(), all_letters.end());
    for (int i = 0; i < n; i++) {
        cin >> word;
        if (can_read(all_unique_letters, word)) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    }
    return 0;
}