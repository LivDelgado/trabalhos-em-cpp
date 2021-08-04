#include <iostream>

#include "printer/printer.hpp"

int main() {
    try {
        printer::Printer printer = printer::Printer();
        std::cout << printer.getMessage() << std::endl;
    } catch (char const* excecao){
        std::cout << excecao << std::endl;
        return 0;
    }
}