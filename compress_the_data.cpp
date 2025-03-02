#include <bits/stdc++.h>
using namespace std;

string runLengthEncoding(string &s) {
    string encoded ;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        char currentChar = s[i];
        int count = 1;

        while (i<n && s[i] == s[i + 1]) {
            count++;
            i++;
        }

        encoded += currentChar + to_string(count);
    }
    return encoded;
}

int main() {
    string input;
    cout << "Enter the string: ";
    cin >> input;
    string encodedString = runLengthEncoding(input);
    cout << "Encoded String: " << encodedString << endl;
    return 0;
}
