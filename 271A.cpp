#include<iostream>

using namespace std;

int areDigitsDistinct(int number) {
    int seenDigits[10] = {0}; // Array to keep track of seen digits

    while (number > 0) {
        int digit = number % 10;

        // Check if the digit has already occurred
        if (seenDigits[digit] == 1) {
            return 0; // Digits are not distinct
        }

        // Mark the digit as seen
        seenDigits[digit] = 1;

        // Remove the last digit from the number
        number /= 10;
    }

    return 1; // All digits are distinct
}



int nextDistinct(int n) {
    while(true) {
        n++;
        if(areDigitsDistinct(n)){
            return n;
        }
    }
}

int main() {

    int y;
    cin >> y;

    cout << nextDistinct(y);
    
    
    return 0;
}