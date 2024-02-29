#include<iostream>

using namespace std;

int main() {
    int n, a, b, c, i = 0, count = 0;
    cin >> n;
    while(i<n) {
        cin >> a >> b >> c;
        if((a+b+c) >= 2) {
            count++;
        }
        i++;
    }
    cout << count << endl;

    
    
    return 0;
}