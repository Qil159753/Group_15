#include<iostream>
using namespace std;

int main() {
    int A = 0;
    cout << "Please enter a number for A: " << endl; //sent data to output steam
    cin >> A;//Recieve A

    if (A == 8) {//If condition if A is equal to 8
        cout << "A is 8" << endl;//Then show "A is 8" to output
    } else if (A > 8) {//else if condition if A is more than 8
        cout << "A is greater than 8" << endl;//Then show A is greater than 8
    } else {//Else condition
        cout << "A is less than 8" << endl;//if nothing above is true then show A is less than 8
    }

    return 0;
}