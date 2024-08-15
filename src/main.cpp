#include "logic.hpp"

#include <iostream>
#include <cstdlib>

int main(int argc, char **argv) {
    cthulhu::Logic *logic = new cthulhu::Logic();
    logic->invoke();
    delete logic;

    return EXIT_SUCCESS;
}
