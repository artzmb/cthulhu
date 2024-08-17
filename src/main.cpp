#include "logic/deck.hpp"
#include "logic/card.hpp"

#include <iostream>
#include <cstdlib>
#include <memory>

int main(int argc, char **argv) {
    std::shared_ptr<cthulhu::AbstractCard> card1 = std::make_shared<cthulhu::PlayerCard>("ID_1", 0);
    std::shared_ptr<cthulhu::AbstractCard> card2 = std::make_shared<cthulhu::PlayerCard>("ID_2", 42);

    std::shared_ptr<cthulhu::Deck> deck = std::make_shared<cthulhu::Deck>();
    
    deck->addCard(card1);
    deck->addCard(card2);
    deck->invoke();

    return EXIT_SUCCESS;
}
