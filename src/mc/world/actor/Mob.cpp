#include "mc/world/actor/Mob.h"

void Mob::refreshInventory() {
    sendInventory(true);
    sendArmor(std::bitset<5>{"11111"});
}
