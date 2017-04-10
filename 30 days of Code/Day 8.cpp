#include <iostream>
#include <map>
#include <vector>
using namespace std;
typedef map<string, int>::iterator MapIterator;

void displayMapValues(map<string, int> pbook){

    for(MapIterator iter = pbook.begin(); iter != pbook.end(); iter++){
        cout << "Name: " << iter->first << endl;
        cout << "Number: " << iter->second << endl;
    }

}

int main(){
    int n, nums;
    string names, query;
    cin >> n;
    map<string, int> pbook;
    for(int i = 0; i < n; i++){
        cin >> names;
        cin >> nums;
        pbook[names] = nums;
    }
    while(cin >> query){
        MapIterator iter;
        iter = pbook.find(query);
        if(iter != pbook.end())
            cout << iter->first << "=" << iter->second << endl;
        else
            cout << "Not found" << endl;
    }
    return 0;
}
