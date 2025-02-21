#include "mc/world/actor/Mob.h"

void Mob::refreshInventory() {
    sendInventory(true);
    sendArmor(std::bitset<5>{"11111"});
}

Mob* Mob::tryGetFromEntity(::EntityContext& entity, bool includeRemoved) {
    auto mob = static_cast<Mob*>(Actor::tryGetFromEntity(entity, includeRemoved));
    if (mob->isType(ActorType::Mob) || mob->hasCategory(ActorCategory::Mob)) {
        return mob;
    }
    return nullptr;
}
