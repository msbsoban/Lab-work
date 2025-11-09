#include <iostream>
#include <utility>
#include <tuple>
using namespace std;
pair <int, int> Numinput(){
    int num1, num2;
    cout << "Enter a number for Arithmetic opertion ";
    cin >> num1;
    cout << "Enter another number ";
    cin >> num2;
    return {num1, num2};
}
int menu(){
    int choice;
    cout << "Enter A number From 1-4 Respectively for +, -, *, /";
    cin >> choice;
    if(choice < 5 || choice > 0){
        return choice;
    }else{
        cout << "Enter Again";
        cin >> choice;
        return choice;
    }
}
int Calculations(int num1, int num2, int choice){
    int Result;
    switch (choice){
        case 1: Result = num1 + num2;
        case 2: Result = num1 - num2;
        case 3: Result = num1 * num2;
        case 4: Result = num1 / num2;
        default: cout << "Invalid operator"; break;
    }
    return Result;
}
int main (){
    int num1, num2;
    tie(num1, num2) = Numinput();
    int choice = menu();
    int result;
    result = Calculations(num1, num2, choice);
    cout << "The answer is " << result << endl;
    return 0;
}