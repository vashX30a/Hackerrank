#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, p, q, i = 0;
    vector<string> city_tolls;
    cout << "Enter number of cities:" << endl;
    cin >> n; endl;
    for (i=0; i <= n; i++){
        cout << "Enter city " << i + 1 << " road tolls:" << endl;
        getline(cin, city_tolls);
    }
    for (int x = 0; x <= n; x++){
        cout << city_tolls[x] << endl;
    }
    return 0;
}
