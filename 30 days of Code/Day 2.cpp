#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mealCost, totalCost, x, y;
    int tip, tax;
    cin >> mealCost;
    cin >> tip;
    cin >> tax;
    x = mealCost * tip/100;
    cout << x << endl;
    y = mealCost * tax/100;
    cout << y << endl;
    totalCost = mealCost + x + y;
    cout << "The total meal cost is " << round(totalCost) << " dollars." << endl;
    return 0;
}
