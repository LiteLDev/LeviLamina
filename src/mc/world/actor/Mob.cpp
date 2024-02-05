#include "mc/world/actor/Mob.h"

void Mob::refreshInventory() {
    sendInventory(true);
    sendArmor(std::bitset<4>{"1111"});
}
