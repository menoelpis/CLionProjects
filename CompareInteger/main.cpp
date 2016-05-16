#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int number1;
    int number2;

    cout << "Enter two integers to compare: "; // prompt user for data
    cin >> number1 >> number2; // read two integers from user

    if ( number1 == number2 )
        cout << number1 << " == " << number2 << endl;
    if ( number1 != number2 )
        cout << number1 << " != " << number2 << endl;
    if ( number1 < number2 )
        cout << number1 << " < " << number2 << endl;
    if ( number1 > number2 )
        cout << number1 << " > " << number2 << endl;
    if ( number1 <= number2 )
        cout << number1 << " <= " << number2 << endl;
    if ( number1 >= number2 )
        cout << number1 << " >= " << number2 << endl;

    return 0; // indicate that program ended successfully

}