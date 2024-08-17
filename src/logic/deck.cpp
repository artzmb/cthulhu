#include "deck.hpp"

#include <iostream>
#include <vector>
#include <memory>

namespace cthulhu {

Deck::Deck() : cards{} {}

Deck::~Deck() {
}

void Deck::addCard(const std::shared_ptr<AbstractCard>& card) {
    cards.emplace_back(card);
}

void Deck::invoke() {
    for (auto card : cards) {
        std::cout << card->toString() << std::endl;
    }
}

};
