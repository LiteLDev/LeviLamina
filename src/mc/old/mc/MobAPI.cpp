//#include "liteloader/api/MobAPI.h"
#include "liteloader/api/Global.h"
#include "mc/Mob.hpp"
#include "mc/ActorDefinitionIdentifier.hpp"

bool Mob::refreshInventory() {
    sendInventory(true);
    std::bitset<4> bits("1111");
    sendArmor(bits);
    return true;
}
