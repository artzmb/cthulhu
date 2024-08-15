#include "logic.hpp"

#include <iostream>

namespace cthulhu {

Logic::Logic() {
    std::cout << "Logic::Logic()" << std::endl;
}

Logic::~Logic() {
    std::cout << "Logic::Logic()" << std::endl;
}

void Logic::invoke() {
    std::cout << "Logic::invoke()" << std::endl;
}

};
