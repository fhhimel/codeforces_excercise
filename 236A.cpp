#include <iostream>

using namespace std; // Add this line

int countUniqueLetters(const string& str) {
    // Assuming ASCII characters for simplicity
    const int CHAR_SET_SIZE = 128;
    
    // Array to keep track of character occurrences
    int charCount[CHAR_SET_SIZE] = {0};
    
    // Count unique letters
    for (char ch : str) {
        // Ignore non-alphabetic characters if needed
        if (isalpha(ch)) {
            // Convert to lowercase to treat 'A' and 'a' as the same letter
            charCount[tolower(ch)]++;
        }
    }
    
    // Count the number of unique letters
    int uniqueCount = 0;
    for (int count : charCount) {
        if (count > 0) {
            uniqueCount++;
        }
    }
    
    return uniqueCount;
}

int main() {
    string input;
    getline(cin, input);

    int uniqueCount = countUniqueLetters(input);
    if(uniqueCount%2 ==0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
