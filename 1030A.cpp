#include<iostream>

using namespace std;



int main() {

    int n, a[100], flag = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1) {
            flag++;
        }
    }

    if(flag == 0) {
        cout << "EASY" << endl;
    }
     else {
        cout << "HARD" << endl;
     }
    
    
    return 0;
}