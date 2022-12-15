#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Range Function Test Cases") 
{
    CHECK(printRange(1,1) == "1 "); 
    CHECK(printRange(1,-1) == ""); 
    CHECK(printRange(1,5) == "1 2 3 4 5 "); 
    CHECK(sumRange(1,1) == 1); 
    CHECK(sumRange(-3,3) == 0); 
    CHECK(sumRange(1,100) == 5050); 
}

TEST_CASE("Array Test Cases") 
{
    int* arr = new int[6];
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = 24;
    CHECK(sumArray(arr, 2) == 29);
    CHECK(sumArray(arr, 0) == 0);
    CHECK(sumArray(arr, 6) == 58);
    delete[] arr;
}

TEST_CASE("IsAlphanumeric Test Cases") 
{
    CHECK(isAlphanumeric("123ABC") == 1);
    CHECK(isAlphanumeric("A") != 0);
    CHECK(isAlphanumeric("?") != 0);
}

TEST_CASE("NestedParens Test Cases") 
{
    CHECK(nestedParens("()") != 1);
    CHECK(nestedParens(")") == 0); 
    CHECK(nestedParens("())") == 0);
}
