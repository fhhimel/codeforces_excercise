#include<iostream>

using namespace std;

int main() {

    string s;
    int i, upperCount = 0, lowerCount = 0;
    cin >> s;
    for (i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z') {
            lowerCount++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            upperCount++;
        }
    }

    if(upperCount > lowerCount) {
        for (i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else {
        for (i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
    

    return 0;
}