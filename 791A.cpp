#include<iostream>

using namespace std;

int main() {

    int limak, bob;
    cin >> limak >> bob;
    int year = 0;
    while(true) {
        limak *= 3;
        bob *= 2;
        year++;
        if(limak > bob) {
            break;
        }
    }
    cout << year << endl;
    


    return 0;
}