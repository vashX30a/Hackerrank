#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    int maxHourglass, hourglass;
    maxHourglass = -100;
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    for(int arr_i = 0; arr_i < 4; arr_i++){
       	for(int arr_j = 0; arr_j < 4; arr_j++){
        	hourglass = arr[arr_i][arr_j] + arr[arr_i][arr_j+1] + arr[arr_i][arr_j+2];
        	hourglass += arr[arr_i+1][arr_j+1];
        	hourglass += arr[arr_i+2][arr_j] + arr[arr_i+2][arr_j+1] + arr[arr_i+2][arr_j+2];
        	if(maxHourglass < hourglass)
        		maxHourglass = hourglass;
            if(arr_j == 0 && arr_i == 0){
                cout << "1st hourglass sum is " << hourglass << endl;
                cout << "Max Hourglass is " << maxHourglass << endl;
            }
       	}
    }
    cout << maxHourglass;
    return 0;
}
