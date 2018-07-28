#include <math.h>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int toWithdraw;

    float initBalance, transactionCharge = 0.5;

    cin >> toWithdraw;
    cin >> initBalance;
    cout << fixed << setprecision(2);

    // Forgot to add transaction charge
    if ((toWithdraw+transactionCharge)<= initBalance) {
        // cout<<"w>b"<<endl;
        if (toWithdraw % 5 == 0) {
            // cout <<"mod 5?"<<endl;
            cout << fixed << setprecision(2)
                 << (initBalance - toWithdraw - transactionCharge) / 1.00
                 << endl;
        } else {
            cout << initBalance << endl;
        }
    } else {
        // cout<<"Insufficient?"<<endl;
        cout << initBalance << endl;
    }
}