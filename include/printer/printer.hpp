#ifndef PRINTER
#define PRINTER

#include <string>

namespace printer {
    class Printer {
        private:
            std::string message;
        public:
            Printer();
            Printer(std::string message);

            std::string getMessage();
    };

}

#endif