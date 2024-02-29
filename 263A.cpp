#include<iostream>

using namespace std;

int main() {
    int n, m;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> n;
            if(n == 1) {
                m = abs(3 - i) + abs(3 - j);
            }
        }
        
    }
    cout << m << endl;
   
    
    
    return 0;
}