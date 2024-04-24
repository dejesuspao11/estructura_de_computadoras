#include <iostream>  //library for input and output operations (printing to the screen)
#include <sstream>   //library for string stream operations
#include <map>       //for using maps (key-value pairs)
#include <string>    //string operations
// this function converts an integer to hexadecimal
std::string to_hex(int number) {  // we define a function named "to_hex", it takes an integer "number" and returns a string
    std::stringstream ss;         // this creates an object named "ss", used to manipulate strings
    ss << std::hex << number;     // converts the integer saved in "number" to hexadecimal format and saves it into "ss"
    return ss.str();              // returns the hexadecimal value as a string from "ss"
}
// Function to print a hexadecimal digit in ASCII art
void print_hex_digit(char digit) {  // Defines a function named "print_hex_digit" that takes a character "digit" as input
    const std::map<char, std::string> hex_art = {  // Creates a map named "hex_art" with characters as keys and ASCII art strings as values
    {'0', " --- \n|   |\n|   |\n|   |\n --- "},  // ASCII art representation for '0'
    {'1', "  |  \n  |  \n  |  \n  |  \n  |  "},  // ASCII art representation for '1'
    {'2', " --- \n    |\n --- \n|    \n --- "},  // ASCII art representation for '2'
    {'3', " --- \n    |\n --- \n    |\n --- "},  // ... representation for '3'
    {'4', "|   |\n|   |\n --- \n    |\n    |"},  // ... representation for '4'
    {'5', " --- \n|    \n --- \n    |\n --- "},  // ... for '5'
    {'6', " --- \n|    \n --- \n|   |\n --- "},  // ...'6'
    {'7', " --- \n    |\n    |\n    |\n    |"},  // ...'7'
    {'8', " --- \n|   |\n --- \n|   |\n --- "},  // ...'8'
    {'9', " --- \n|   |\n --- \n    |\n --- "},  // ...'9'
    {'a', " --- \n|   |\n|   |\n|   |\n --- "},  // ...'a'
    {'b', "|    \n|--- \n|   |\n|   |\n|--- "},  // ...'b'
    {'c', " --- \n|    \n|    \n|    \n --- "},  // ...'c'
    {'d', "    |\n ---|\n|   |\n|   |\n ---|"},  // ...'d'
    {'e', " --- \n|    \n|--- \n|    \n --- "},  // ...'e'
    {'f', " --- \n|    \n|--- \n|    \n|    "}   // ...'f'
    };
    std::cout << hex_art.at(digit) << '\n';  // prints the corresponding representation for the given 'digit' character
}
int main() {
    int number;  // integer variable named "number"
    std::cout << "enter a decimal number, please: ";  // shows the user a message asking to enter a decimal number
    std::cin >> number;  // we take the input from the user and store it in "number"

    std::string hex = to_hex(number);  // we call the "to_hex" function to convert the value in "number" to hexadecimal,then store it in "hex"
    std::cout << "Hexadecimal equivalent: " << hex << std::endl;  // shows "outputs" the hexadecimal equivalent of the number we entered

    std::cout << "\nprinting graphic representation...:\n";  // message indicating we are about to be print the number

    // iterates through each character contained in "hex" (string)
    for (char digit : hex) {
        print_hex_digit(digit);  // we call "print_hex_digit" to print the digit
        std::cout << "\n";       // moves to the next line after printing each ASCII digit
    }

    return 0;  // successsss
}