#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    string S;
    cin >> t;
    for (int x = 0; x < t; x++){
        cin >> S;
        for (int i = 0; i < S.length(); i++){
            if (i%2 == 0){
                cout << S[i];
            }
        }
        cout << " ";
        for (int i = 0; i < S.length(); i++){
            if (i%2 != 0){
                cout << S[i];
            }
        }
        cout << endl;
    }
    return 0;
}
