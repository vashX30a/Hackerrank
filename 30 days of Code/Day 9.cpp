#include <iostream>
using namespace std;

int factorial(int n){
    if(n > 0)
        return n * factorial(n-1);
    else
        return 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
