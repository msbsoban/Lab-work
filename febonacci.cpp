#include <iostream>
using namespace std;
void febonacci(int num){
    int a = 0, b = 1, c;
    // cout << a;
    for(int i = 0; i <= num; i++){
        c= a+b;
        cout << a << " ";
        a = b;
        b = c;
    }
}
 int main(){
    int num;
    cout << "Enter A Number" << endl;
    cin >> num;
    febonacci(num);
    return 0;
 }