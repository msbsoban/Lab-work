#include <iostream>
using namespace std;
int main(){
    int count = 0,marks[8] {45, 88, 50, 61, 30, 77, 52, 99};
    for (int i = 1; i <= 8; i++){
        if (marks[i] > 50){
            count += 1;
        }
    }
    cout << "Number Of Student Passed: " << count;
    return 0;
}