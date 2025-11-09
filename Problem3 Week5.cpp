#include <iostream>
using namespace std;
int main(){
    int x, i, factorial = 1;
    cout << "Enter A number to find factorial ";
    cin >> x;
    i = x;
    while (i > 0){
        factorial *= i;
        i--;
    }
    cout << factorial << endl;
    return 0;
}