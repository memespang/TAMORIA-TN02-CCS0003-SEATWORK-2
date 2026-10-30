#include <iostream>
using namespace std;

int digitCounter(int num) {
    int counter = 0;
    num = abs(num);
    
    while (num > 0) {
        num /= 10;
        counter += 1; 
    }
    return counter;
}

int main() {
    int num;
    
    cout << "Enter a 4-digit number: ";
    cin >> num;

    int counter = digitCounter(num);

    if (counter > 4) {
        cout << "The maximum digits of a number you can enter is 4!";
        return 0;
    } 
    if (num < 1) {
        cout << "It is a non-positive number";
    } else {
        cout << "It is a positive number" << endl;
        cout << "Digits: " << counter; 
    }
    return 0;
}