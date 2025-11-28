#include <iostream>
using namespace std;
int main(){
    int maxnum = 0, numbers [7] {4,9,1,7,12,3,6};
    for (int i = 1; i <= 7; i++){
        cout << numbers[i] << endl;
        if (numbers[i] > maxnum){
            maxnum = numbers[i];
        }
    }
    cout << "Mximum Number: "<< maxnum;
    return 0;
}