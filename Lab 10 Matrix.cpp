#include <iostream>
using namespace std;
int main (){
    int array[2][2]{{3,5},{7,2}};
    int array2[2][2]{{4,7},{9,2}};
    int resultarray[2][2];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            resultarray[i][j] = 0;
            for (int k = 0; k < 2; k++){
                resultarray[i][j] += array[i][k]*array2[k][j]; 
            }
        }
    }
    cout << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << resultarray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}