#include<iostream>

using namespace std;

int main() {

    int n, a, b, passengers = 0, min = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        passengers = (passengers - a) + b;
        if(passengers > min) {
            min = passengers;
        }
    }
    cout << min << endl;
    
    return 0;
}