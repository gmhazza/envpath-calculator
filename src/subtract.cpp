#include <iostream>
#include <string>
#include <stdexcept>

int main(int argc, char *argv[])
{
    if (argc != 3) {
        std::cerr << "Only 2 integers are allowed. " << std::endl;
        return 1;
    }
    long int a;
    try {
        a = std::stoi(argv[1]) - std::stoi(argv[2]);
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