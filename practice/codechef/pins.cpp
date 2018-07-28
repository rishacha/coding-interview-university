#include <math.h>
#include <iostream>
using namespace std;
// I got the basic algorithm clear, but I didn't solve it myself. So not as happy.
int main() {
    int totalTestCases;
    cin >> totalTestCases;
    while (totalTestCases-- > 0) {
        int testCase;
        cin >> testCase;
        int n = testCase / 2;
        cout << 1 << " " << 1;
        while (n-- > 0) {
            cout << 0;
        }
        cout << endl;
    }
}