#include <iostream>
#include <vector>
#include <list>
using namespace std;
typedef list<int>::iterator Listerator;

void displayList(list<int> bin){
    int x = 0;
    for(Listerator i = bin.begin(); i != bin.end(); i++){
        cout << "Content at " << x << ": " << *i << endl;
        x++;
    }
}

int main(){
    bool prevIsOne = false;
    int n, remainder;
    int total1, max1;
    total1 = max1 = 0;
    list<int> bin;
    Listerator i = bin.begin();
    cin >> n;
    while(n > 0){
        remainder = n%2;
        n = n/2;
        bin.insert(i, remainder);
    }
    displayList(bin);
    for(Listerator iter = bin.begin(); iter != bin.end(); iter++){
        if(iter == bin.begin()){
            if(*iter == 1){
                prevIsOne = true;
                total1++;
            }
            else{
                prevIsOne = false;
            }
        }
        else{
            if(prevIsOne){
                if(*iter == 1){
                    total1++;
                    prevIsOne = true;
                    if(max1 < total1)
                        max1 = total1;
                }
                else{
                    if(max1 < total1)
                        max1 = total1;
                    total1 = 0;
                    prevIsOne = false;
                }
            }
            else{
                if(*iter == 1){
                    prevIsOne = true;
                    total1++;
                    if(max1 < total1)
                        max1 = total1;
                }
                else{
                    prevIsOne = false;
                }
            }
        }
    }
    cout << max1;
    return 0;
}
