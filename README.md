Here is a simple code example in C++ to create
calculator that calculates multiples of entered numbers:

--------------------------------------------------------------------------
    #include <iostream>
    using namespace std;
    int main() {
    int angka, kelipatanMaks;

    cout << "Masukkan angka: ";
    cin >> angka;

    cout << "Masukkan kelipatan maksimum: ";
    cin >> kelipatanMaks;

    cout << "Kelipatan dari " << angka << " hingga " << kelipatanMaks << " kali:" << endl;

    for (int i = 1; i <= kelipatanMaks; ++i) {
        cout << angka << " x " << i << " = " << angka * i << endl;
    }

    return 0;
    }
-------------------------------------------------------------------------------

Explanation:
Number Input: The program asks the user to enter a number to be entered
used as a basis for calculating multiples.
Maximum Multiple Input: User is also asked to enter a limit 
the maximum multiple you want to calculate.
Loop: The program uses a for loop to calculate multiples of 
the number entered, from 1 to the specified maximum multiple.
Usage Example:
Suppose the user enters the number 3 
and a maximum multiple of 5, the program will produce:

3 x 1 = 3

3 x 2 = 6

3 x 3 = 9

3 x 4 = 12

3 x 5 = 15


This code is a basic example that can be run in the environment 
C++ development such as Visual Studio, Code::Blocks, or terminal. 
The multiples of the numbers entered will be displayed on the console screen.

