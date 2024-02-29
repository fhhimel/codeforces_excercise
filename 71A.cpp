#include<iostream>

using namespace std;

int abv(string w) {
    int count = 0;
    for (int i = 1; i < w.length() - 1; i++)
    {
        count++;
    }
    return count;
    
}

int main() {
    int n;
    string w;
    cin >> n;
    int i = 0;
    while (i<n)
    {
        cin >> w;
        if(w.length() > 10) {
            cout << w[0] << abv(w) << w[w.length()-1] <<  endl;

        }
        else {
            cout << w << endl;
        }
        i++;
    }
    
    

    
    
    return 0;
}