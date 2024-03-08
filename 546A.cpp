#include<iostream>

using namespace std;

int main() {

    int k, n, w, p = 0, b;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        p += (i * k);
    }

    b = p-n;
    if(b < 0) {
        b = 0;
    }

    cout << b << endl;
    


    return 0;
}