#include "card.hpp"

namespace cthulhu {

const std::string& AbstractCard::getId() {
    return id;
}

uint8_t PlayerCard::getCost() {
    return cost;
}

std::string PlayerCard::toString() {
    return std::move("ID: " + id + "; Cost: " + std::to_string(cost));
}

};