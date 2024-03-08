#include<iostream>

using namespace std;

int main() {
    int n, i, count = 0;
    char s[100];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (i = 0; i < n-1; i++)
    {
        if(s[i] == s[i+1]) {
            count++;
        }
    }

    cout << count << endl;

    


    return 0;
}