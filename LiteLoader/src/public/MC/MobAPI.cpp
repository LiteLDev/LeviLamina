//#include "MobAPI.h"
#include <Global.h>
#include <MC/Actor.hpp>
#include <MC/Mob.hpp>
#include <MC/ActorDefinitionIdentifier.hpp>
#include <MC/PathNavigation.hpp>

bool Mob::refreshInventory() {
    sendInventory(true);
    std::bitset<4> bits("1111");
    sendArmor(bits);
    return true;
}
