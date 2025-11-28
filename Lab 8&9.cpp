#include <iostream>
using namespace std;
int attemptWithdraw(int balance, int amount){
    if(balance > amount){
        balance -= amount;

    }else{
        cout << "Wrong Input " << endl;
    }
    return balance;
}
int main(){
    int balance, amount, newbalance, checkamount;
    cout << "Enter The Balance Amount ";
    cin >> balance;
    bool flag = false;
    do{
        cout << "Enter the amount to withdraw ";
        cin >> amount;
        if (amount == 0) break;
        checkamount = balance-amount;
        if(checkamount >= 0 ){
        newbalance = attemptWithdraw(balance, amount);
        cout << "New Balance -> " <<  newbalance << endl;
        flag = true;
        }
    }while(flag == true);
    cout << "Balance In Main -> " << balance << endl;
    return 0;
}