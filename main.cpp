#include <iostream>
#include "funcs.h"

int main() 
{
    std::string s;
    int t, size = 5;
    int* arr = new int[size];
    s = printRange(-2,10);
    // A
    std::cout << s << "\n-----\n";
    t = sumRange(-2,10);
    // B
    std::cout << t << "\n-----\n";
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    t = sumArray(arr, size);
    // C
    std::cout << "Sum is " << t << "\n-----\n";
    delete[] arr;
    bool r = isAlphanumeric("ABCDEFGH");
    // D
    std::cout << r << "\n-----\n";
    // E
    std::cout << nestedParens("(()") << "\n";
    return 0;
}