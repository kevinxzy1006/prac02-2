#include <iostream>
#include <string>
#include <bitset> // For std::bitset

extern void print_binary_str(std::string decimal_number);

int main()
{
    // Test cases
    print_binary_str("0");         // Output: 0
    print_binary_str("789");       // Output: 1100010101
    print_binary_str("123456789"); // Output: 111010110111100110100010101

    return 0;
}
