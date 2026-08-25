#include <iostream>
#include <string>
#include <stdexcept>

#include "../include/help.h"


int main(int argc, char *argv[])
{
    if (argc == 2) {
        if ((argv[1] == "--help") || (argv[1] == "-h")) {
            help::print_help_one("cube");
            return 0;
        }
    } else if (argc != 2) {
        std::cerr << "Only 1 integers are allowed. " << std::endl;
        return 1;
    }
    long int a;
    try {
        a = std::stoi(argv[1]) * std::stoi(argv[1]) * std::stoi(argv[1]);
    }
    catch (std::invalid_argument& e) {
        std::cout << "Only integers are allowed" <<std::endl;
        return 1;
    }
    catch (std::out_of_range& e) {
        std::cout << "Input is out of range of long integer" <<std::endl;
        return 1;
    }
    std::cout << a << std::endl;
    return 0;
}