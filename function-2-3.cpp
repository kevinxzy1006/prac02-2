#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        if (length <= 0)
        {
            return false;
        }
        if (integers[i] != integers[length - i - 1]) // check if the array is palindrome.
        {
            return false;
        }
    }
    return true;
}

int sum_array_elements(int integers[], int length)
{
    if (length <= 0)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < length; i++) // add all the elements together
    {
        sum += integers[i];
    }
    return sum;
}

int sum_if_palindrome(int integers[], int length)
{
    if (length <= 0)
    {
        // Output that the array is empty.
        return -1;
    }
    if (is_palindrome(integers, length))
    {
        return sum_array_elements(integers, length);
    }
    else
    {
        return -2;
    }
}