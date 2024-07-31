#include <iostream>
#include <string>
#include <bitset> // For std::bitset

void print_binary_str(std::string decimal_number)
{
    // Convert the string to an integer
    int number = std::stoi(decimal_number);

    // Convert the integer to a binary string
    std::string binary_string = std::bitset<32>(number).to_string();

    // Remove leading zeros
    size_t pos = binary_string.find('1');
    if (pos != std::string::npos)
    {
        binary_string = binary_string.substr(pos);
    }
    else
    {
        // Special case: the number is 0
        binary_string = "0";
    }

    // Print the binary string
    std::cout << binary_string << std::endl;
}
