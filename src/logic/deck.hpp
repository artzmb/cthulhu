#ifndef DECK_HPP
#define DECK_HPP

#include "card.hpp"

#include <vector>
#include <memory>
#include <type_traits>

namespace cthulhu {

class Deck {
public:
    Deck();
    ~Deck();

    void addCard(const std::shared_ptr<AbstractCard>& card);
    
    void invoke();
private:
    std::vector<std::shared_ptr<AbstractCard>> cards;
};

};

#endif
