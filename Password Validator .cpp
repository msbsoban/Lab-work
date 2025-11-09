#include <iostream>
using namespace std;
string password;
int main(){
    do
    {
        cout << "Enter Password ";
        cin >> password;
        if(password == "Python123"){
            cout << "Correct Password";
            break;
        } else {
            cout << "Incorrect Password";
            cout << endl;
        }

    } while (password != "Python123");
    
    return 0;
}