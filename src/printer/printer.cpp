#include "printer/printer.hpp"

using namespace printer;

Printer::Printer() {
    this->message = "Hello World";
}

Printer::Printer(std::string message) {
    this->message = message;
}

std::string Printer::getMessage() {
    return this->message;
}
