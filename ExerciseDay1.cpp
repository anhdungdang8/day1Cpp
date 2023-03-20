
/*Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
The returned integer should be non-negative as well.
You must not use any built-in exponent function or operator.*/
//Use Babylonian solution to solve requirement
#include <iostream>
using namespace std;

int main() {
    // Initialize variables for the program

    int x;
   cout<<"Enter x:";
   cin >> x;
    // initialize  hypothetical variable to define the range of possible square roots. The variable ans is used to store the answer.

    int left = 0, right = x;
    int ans = 0;

    while (left <= right) {
        long long avg = (left + right) / 2;// average of left and right - hypothetical variable
        if (avg * avg <= x) {
            ans = avg;
            left = avg + 1;
        } else {
            right = avg - 1;
        }
    }

    cout << "square of x:"<<ans << endl;
    return 0;
}