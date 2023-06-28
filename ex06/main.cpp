#include "Harl.hpp"

int main(int argc, char** argv) {
    Harl harl;
    int l = 0;

    if (argc < 2) {
        std::cout << "Missing complaint level argument!" << std::endl;
        return 0;
    }

    std::string level = argv[1];

    if (level == "DEBUG") {
        l = 1;
    } else if (level == "INFO") {
        l = 2;
    } else if (level == "WARNING") {
        l = 3;
    } else if (level == "ERROR") {
        l = 4;
    }

    switch (l) {
        case 1:
            harl.complain("DEBUG");
        case 2:
            harl.complain("INFO");
        case 3:
            harl.complain("WARNING");
        case 4:
            harl.complain("ERROR");
            break;
        default:
            harl.complain("INVALID_LEVEL");
            break;
    }

    return 0;
}
