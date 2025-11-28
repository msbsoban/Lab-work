#include <iostream>
using namespace std;
int main(){
    int Numbooks;
    cout << "Enter Number of book ";
    cin >> Numbooks;
    int totalfine = 0;
    for(int i = 1; i <= Numbooks; i++){
        int numberdays;
        int fine = 5;
        cout << "Enter how many days book " << i << " is late" << endl;
        cin >> numberdays;
        for(int j = 2; j <= numberdays; j++){
                fine *= 2;
                if(fine >= 1000){
                    fine = 1000;
                }
        }

        cout << "Fine for book " << i << ": " << fine << endl;
        totalfine += fine;
    }
    cout <<  "Your totalfine is: " << totalfine << endl;
    return 0;
}