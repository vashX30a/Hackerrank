#include <iostream>
#include <list>
using namespace std;
typedef list<int>::iterator Listerator;

int main(){
    list<int> list1;
    list1.clear();
    for(int i = 1; i <= 5; i++)
        list1.push_back(i);
    cout << "Front: " << list1.front() << endl;
    cout << "Back: " << list1.back() << endl;
    cout << "Full list: " << endl;
    for(Listerator iter = list1.begin(); iter != list1.end(); iter++){
        cout << *iter << endl;
    }
    cout << endl;
    int x = list1.back();
    while(!list1.empty()){
        cout << list1.back() << endl;
        list1.pop_back();
    }
    cout << endl <<  x;
    return 0;
}
