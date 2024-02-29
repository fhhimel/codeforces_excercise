#include<iostream>

using namespace std;

int main() {
    string name;
    name="Fahim";

    int characterCount[256] = {0};


    for (char ch : name) {
        cout << ch << endl;
        cout << characterCount[ch] << endl;
        characterCount[ch]++;
    }

    return 0;
}