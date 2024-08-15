#include "logic.hpp"

#include <iostream>
#include <cstdlib>
#include <memory>

int main(int argc, char **argv) {
    std::unique_ptr<cthulhu::Logic> logic = std::make_unique<cthulhu::Logic>();
    logic->invoke();

    return EXIT_SUCCESS;
}
