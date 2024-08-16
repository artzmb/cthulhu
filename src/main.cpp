#include "logic/deck.hpp"

#include <iostream>
#include <cstdlib>
#include <memory>

int main(int argc, char **argv) {
    std::unique_ptr<cthulhu::Deck> deck = std::make_unique<cthulhu::Deck>();
    return EXIT_SUCCESS;
}
