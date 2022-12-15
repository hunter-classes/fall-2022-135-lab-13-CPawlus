#include <iostream>
#include "funcs.h"

std::string printRange(int l, int r) 
{
    if(l < r+1) 
    {
        return std::to_string(l) + " " + printRange(l+1,r);
    }
    else 
    {
        return "";
    }
}

int sumRange(int l, int r) 
{
    if(l < r+1) 
    {
        int temp = 0;
        return (temp + l) + sumRange(l+1, r);
    }
    else 
    {
        return 0;
    }
}

int sumArray(int* arr, int size) 
{
    if(size > 0) 
    {
        int temp = 0;
        return (temp + arr[size-1]) + sumArray(arr, size-1); 
    }
    else 
    {
        return 0;
    }
}

bool isAlphanumeric(std::string s) 
{
    if(s.length()-1 < 1) 
    {
        return true;
    }
    else 
    {
        return isAlphanumeric(s.substr(0, s.length()-1)) && isalnum(s[s.length()-1]);
    }
}

bool nestedParens(std::string s) 
{
    if(s == "\"\"") 
    {
        return true;
    }
    if((s.substr(s.length()-1, s.length()) == "\"") && (s.substr(0,1) == "\""))
    {
        s = s.substr(1, s.length()-2);
    }
    if((s.substr(s.length()-1, s.length()) == "(") && (s.substr(0,1) == ")")) 
    {
        if(s.length()-1 < 2) 
        {
            return true;
        }
        else 
        {
            return nestedParens(s.substr(1, s.length()-2));
        }
    }
    else 
    {
        return false;
    }
}