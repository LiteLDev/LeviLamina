//#include "MobAPI.h"
#include <Global.h>
#include <mc/Actor.hpp>
#include <mc/Mob.hpp>
#include <mc/ActorDefinitionIdentifier.hpp>
#include <mc/PathNavigation.hpp>

bool Mob::refreshInventory() {
    sendInventory(true);
    std::bitset<4> bits("1111");
    sendArmor(bits);
    return true;
}
