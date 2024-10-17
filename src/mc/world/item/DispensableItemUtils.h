#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/world/item/ArmorSlot.h"

namespace DispensableItemUtils {
// NOLINTBEGIN
MCAPI void spawnLoot(class Level& level, class Actor& actor, std::string const& lootTable);

MCAPI bool tryDispenseArmor(
    class BlockSource& region,
    class Container&   container,
    int                slot,
    class BlockPos     pos,
    ::ArmorSlot        armorSlot
);

MCAPI bool tryDispenseEquipment(
    class BlockSource&           region,
    class Container&             container,
    int                          slot,
    class BlockPos               pos,
    ::Puv::Legacy::EquipmentSlot equipmentSlot,
    bool                         dispenseToPlayers
);
// NOLINTEND

}; // namespace DispensableItemUtils
