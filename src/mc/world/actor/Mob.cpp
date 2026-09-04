#include "mc/world/actor/Mob.h"
#include "mc/deps/ecs/gamerefs_entity/GameRefsEntity.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/world/SimpleContainer.h"
#include "mc/world/item/ItemStack.h"
#include "provider/ActorEquipment.h"

void Mob::refreshInventory() {
    sendInventory(true);
    sendArmor(std::bitset<5>{"11111"});
}

Mob* Mob::tryGetFromEntity(::EntityContext& entity, bool includeRemoved) {
    auto mob = static_cast<Mob*>(Actor::tryGetFromEntity(entity, includeRemoved));
    if (mob->getEntityTypeId() == ActorType::Mob || mob->hasCategory(ActorCategory::Mob)) {
        return mob;
    }
    return nullptr;
}

ItemStack const& Mob::getItemSlot(::SharedTypes::Legacy::EquipmentSlot slot) const {
    using SharedTypes::Legacy::ArmorSlot;
    using SharedTypes::Legacy::EquipmentSlot;
    if (slot > EquipmentSlot::Offhand) {
        // ArmorSlot = EquipmentSlot - 2
        auto newSlot = static_cast<ArmorSlot>(static_cast<int>(slot) - 2);
        if (newSlot > ArmorSlot::HumanoidCount) {
            return ItemStack::EMPTY_ITEM();
        } else {
            return getArmor(static_cast<SharedTypes::Legacy::ArmorSlot>(slot));
        }
    } else {
        return ActorEquipment::getHandContainer(getEntityContext()).getItem(static_cast<int>(slot));
    }
}
