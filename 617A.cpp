#include<iostream>

using namespace std;

int main() {

    int x, step = 0, pos[5] = {5, 4, 3, 2, 1};
    cin >> x;

    for (int i = 0; i < 5; i++)
    {
        if(x / pos[i] > 0) {
            step += x/pos[i];
            x %= pos[i];
        }
        
    }

    cout << step << endl;
    


    return 0;
}