#ifndef CARD_HPP
#define CARD_HPP

#include <cstdint>
#include <string>

namespace cthulhu {

class AbstractCard {
public:
    AbstractCard(const std::string& id) : id(id) {}
    virtual ~AbstractCard() = default;

    virtual std::string toString() = 0;

    const std::string& getId();
protected:
    std::string id;
};

class PlayerCard : public AbstractCard {
public:
    PlayerCard(const std::string &id, uint8_t cost) : AbstractCard(id), cost(cost) {}
    ~PlayerCard() override {}

    std::string toString() override;

    uint8_t getCost();
private:
    uint8_t cost;
};

};

#endif
