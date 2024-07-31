#include <iostream>
#include <string>
#include <algorithm> // for std::reverse

using namespace std;

// Transform the integer decimal number into a binary, and print out the result.
void print_binary_str(const string &decimal_number)
{
    // Transform the integer decimal string to an integer
    int num = stoi(decimal_number);

    // If the number is 0, print directly.
    if (num == 0)
    {
        cout << "0" << endl;
    }

    // transform the integer into a binary.
    string binary_result;
    while (num > 0)
    { // check if this is a positive number
        binary_result += (num % 2 == 0 ? "0" : "1");
        num /= 2;
    }
    // Reverse the string to get the correct binary representation.
    reverse(binary_result.begin(), binary_result.end());

    // Print out the binary string
    cout << binary_result << endl;
}