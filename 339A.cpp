#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string expression;
    cin >> expression;

    // Remove '+' characters from the string
    expression.erase(remove(expression.begin(), expression.end(), '+'), expression.end());

    // Sort the digits in the string
    sort(expression.begin(), expression.end());

    // Add '+' characters back in the output string
    for (int i = 0; i < expression.size() - 1; i += 2) {
        expression.insert(i + 1, "+");
    }

    // Output the modified expression
    cout << expression << endl;

    return 0;
}
