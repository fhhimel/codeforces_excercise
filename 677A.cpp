#include<iostream>

using namespace std;

int main() {

    int n, h, heights[2000], width = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
        if(heights[i] > h) {
            width += 2;
        }
        else {
            width += 1;
        }
    }
    cout << width << endl;
    
    return 0;
}