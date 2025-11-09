#include <iostream>
using namespace std;
void menu(){
    cout << "1) Check Even/Odd " << endl;
    cout << "2) Count Digits " << endl;
    cout << "3) Sum of Digits " << endl;
    cout << "4) Check Prime " << endl;
    cout << "5) Exit " << endl;
}
int countnum(int num){
    int count = 0;
    while(num != 0){
        count ++;
        num /= 10;
    }
    return count;
}
int Sumdigits(int num){
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
bool checkprime(int num){
    if(num < 2){
        return false;
    }
    for (int i = 2; i <= num /2; i++){
        if(num % i == 0){
            return false;
        }   
    }
    return true;
}
bool checknum(int num){
    if(num % 2 == 0){
        return true;
    }else{ 
        return false;
    }
}
int getNumber(){
    int number;
    cout << "Enter a number to check ";
    cin >> number;
    return number;
}
void options(){
    bool istrue = true;
    do
    {
        int number, count, sum, choice;
        number = getNumber();
        cout << "Enter a number to choose from menu ";
        cin >> choice;
        
        switch (choice){
            case 1: 
            if(checknum(number)){
                cout << number << " Is Even " << endl;
            }else{
                cout << number << " Is Odd " << endl;
            }
            break;
            case 2:
            count = countnum(number);
            cout << "Total number of digits are "<< count;
            break;
            case 3: 
            sum = Sumdigits(number);
            cout << "The sum of all digits is " << sum;
            break;
            case 4: 
            if(checkprime(number)){
                cout << number << " Is Prime " << endl;
            }else{
                cout << number << " Not Prime " << endl;
            }
            break;
            case 5:
            
            istrue = false;
        }
        cout << endl;
    } while (istrue);
}

int main(){
    menu();
    options();
    return 0;
}