#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = rows; i >= 1; i--) { 
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
<<<<<<< HEAD
<<<<<<< HEAD
            cout << "* ";
=======
            cout << "*";
>>>>>>> 64a235f3bb406a274c1dc4498f53e54af0f7c79b
=======
            cout << "*";
>>>>>>> 64a235f3bb406a274c1dc4498f53e54af0f7c79b
        }
        cout << endl;
    }
    return 0;
}