#include <iostream>
using namespace std;
int main(){
    int rows, Col, seatrow, seatcol;
    string F = "F";
    for(Col = 1; Col <= 5; Col++){
            for(rows = 1; rows <= 5; rows++){
                cout << "(" << rows << "-" << Col << " " << F <<")" << " ";
             }
             cout << endl;
    }
    do {
        cout << "Enter Seatrow Number: ";
        cin >> seatrow;
        cout << "Enter Seatcol Number: ";
        cin >> seatcol;
        if(seatrow == rows && seatcol == Col){
            F = "R";
        } else{
            F = "F"
            continue; 
        }
        cout << "(" << seatrow << "-" << seatcol << " " << F <<")" << " ";
        } while()
    return 0;
}