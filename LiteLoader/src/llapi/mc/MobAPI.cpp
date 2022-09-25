//#include "llapi/MobAPI.h"
#include "llapi/Global.h"
#include "llapi/mc/Actor.hpp"
#include "llapi/mc/Mob.hpp"
#include "llapi/mc/ActorDefinitionIdentifier.hpp"
#include "llapi/mc/PathNavigation.hpp"

bool Mob::refreshInventory() {
    sendInventory(true);
    std::bitset<4> bits("1111");
    sendArmor(bits);
    return true;
}
