#include <iostream>
#include <unordered_map>
using namespace std;

char firstNonRepeatingCharacter(const string &s) {
    unordered_map<char, int> freq;

    // Step 1: Count frequency of each character
    for (char ch : s) {
        freq[ch]++;
    }

    // Step 2: Find the first character with frequency 1
    for (char ch : s) {
        if (freq[ch] == 1) {
            return ch;
        }
    }
    
    return '\0';  // Return null character if no unique character is found
}

int main() {
    string input = "aabbccdeff";
    char result = firstNonRepeatingCharacter(input);
    if (result != '\0')
        cout << result << endl;  // Output: "d"
    else
        cout << "No unique character found" << endl;
    
    return 0;
}
