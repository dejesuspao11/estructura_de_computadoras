// import required libraries
#include <iostream>   
#include <sstream>    
#include <map>        
#include <string>    

// converts binary (string type) to hexadecimal
std::string bin_to_hex(const std::string& binary) {  // we define the function "bin_to_hex", it takes a constant, references to a string "binary" and returns a string
    std::stringstream ss;  // creates an object named "ss" for manipulating strings
    ss << std::hex << std::stoi(binary, nullptr, 2);  // converts the binary string to decimal, then to hexadecimal, and saves it into "ss"
    return ss.str();  // returns the hexadecimal value (from "ss")
}

// Function to print a hexadecimal digit in ASCII art
void print_hex_digit(char digit) {  // "print_hex_digit" is a function that takes a character as input
    const std::map<char, std::string> hex_art = {  // this creates a map named "hex_art" 
        {'0', " --- \n|   |\n|   |\n|   |\n --- "},  
        {'1', "  |  \n  |  \n  |  \n  |  \n  |  "}, 
        {'2', " --- \n    |\n --- \n|    \n --- "}, 
        {'3', " --- \n    |\n --- \n    |\n --- "},  
        {'4', "|   |\n|   |\n --- \n    |\n    |"},  
        {'5', " --- \n|    \n --- \n    |\n --- "},  
        {'6', " --- \n|    \n --- \n|   |\n --- "},  
        {'7', " --- \n    |\n    |\n    |\n    |"},  
        {'8', " --- \n|   |\n --- \n|   |\n --- "},  
        {'9', " --- \n|   |\n --- \n    |\n --- "},  
        {'a', " --- \n|   |\n|   |\n|   |\n --- "}, 
        {'b', "|    \n|--- \n|   |\n|   |\n|--- "}, 
        {'c', " --- \n|    \n|    \n|    \n --- "}, 
        {'d', "    |\n ---|\n|   |\n|   |\n ---|"},  
        {'e', " --- \n|    \n|--- \n|    \n --- "},  
        {'f', " --- \n|    \n|--- \n|    \n|    "}   
    };

    std::cout << hex_art.at(digit) << '\n';  //prints the ASCII art for the given digit
}

int main() {
    std::string binary;  // string variable named "binary" to store the binary number

    std::cout << "Enter a binary number: ";  //shows a message asking the user to enter a binary number
    std::cin >> binary;  // takes the input from the user and stores it in "binary" 

    std::string hex = bin_to_hex(binary);  // we called the "bin_to_hex" function to convert binary to hexadecimal, the result is stored in "hex"
    std::cout << "Hexadecimal equivalent: " << hex << std::endl;  // it also shows the hexadecimal equivalent of the entered binary number

    std::cout << "\ngraphic representation:\n";  // 

    // it goes through each character in the "hex" string
    for (char digit : hex) {
        print_hex_digit(digit);  // this calls the "print_hex_digit" function to print the ASCII art for the current digit
        std::cout << "\n";       //
    }

    return 0;  // completed!
}
