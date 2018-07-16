#include "libproblem.h"
#include <iostream>

using namespace std;

int LibProblem::min_element(int *arr, int begin, int end) {
    /*
     Debugging/printing
    cout << "New Begin : " << begin << endl;
    cout << "New End : " << end << endl;
    for (int i = begin; i <= end; i++) {
        cout << arr[i];
    }
    cout << endl;
    */

    int mid = (begin + end) / 2;

    // cout << "New mid : " << mid << endl;
    // cout << endl;

    int length = end - begin;

    if (length == 0) {
        return arr[begin];
    } else if (length == 1) {
        // cout << "Is it here?" << endl;
        return arr[end];
    } else {
        // Case 1 : All sorted
        if (arr[begin] < arr[mid] && arr[mid] < arr[end]) {
            return arr[begin];
        }
        // Case 2 : Min element is in the lower half
        else if (arr[begin] > arr[mid]) {
            // cout << "Is it here1?" << endl;
            return min_element(arr, begin, mid);
        }
        // Case 3 : Min element is in the upper half
        else {
            // cout << "Is it here2?" << endl;
            return min_element(arr, mid, end);
        }
    }
}
