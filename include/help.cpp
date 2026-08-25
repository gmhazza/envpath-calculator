#include <iostream>

#include "./help.h"

void help::print_help_one(const std::string& module) {
    std::cout << "Usage: " << std::endl << module << " <integer>" << std::endl << module << " [Option]" << std::endl;
    std::cout << std::endl << "[Option]:\n--help or -h" << std::endl;
}
void help::print_help_two(const std::string& module) {
    std::cout << "Usage: " << std::endl << module << " <integer> <integer>" << std::endl << module << " [Option]" << std::endl;
    std::cout << std::endl << "[Option]:\n--help or -h" << std::endl;
}