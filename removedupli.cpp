#include <iostream>
using namespace std;

string removeConsecutiveDuplicates(const string &s) {
    if (s.empty()) return "";

    string result;
    result.reserve(s.size());  // Optimizing memory allocation
    result += s[0];  // Add the first character

    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] != s[i - 1]) {
            result += s[i];
        }
    }
    return result;
}

int main() {
    string input = "aabbccdd";
    cout << removeConsecutiveDuplicates(input) << endl;  // Output: "abcd"
    return 0;
}
