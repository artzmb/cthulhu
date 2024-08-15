#include <iostream>
#include <cstdlib>

#include "logic/logic.hpp"

int main(int argc, char **argv) {
    cthulhu::Logic *logic = new cthulhu::Logic();
    logic->invoke();
    delete logic;

    return EXIT_SUCCESS;
}
