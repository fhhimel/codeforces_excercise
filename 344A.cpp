#include<iostream>

using namespace std;

int main() {
    int n, group = 1;
    string magnet[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> magnet[i];
        if(i > 0 && magnet[i] == magnet[i-1]) {
            continue;
        }
        group++;
    }

    cout << group << endl;
    

    return 0;
}