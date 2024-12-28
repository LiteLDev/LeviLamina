#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/EquipmentSlot.h"
#include "mc/world/item/ArmorSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Container;
class Level;
// clang-format on

namespace DispensableItemUtils {
// functions
// NOLINTBEGIN
MCAPI void spawnLoot(::Level& level, ::Actor& actor, ::std::string const& lootTable);

MCAPI bool
tryDispenseArmor(::BlockSource& region, ::Container& container, int slot, ::BlockPos pos, ::ArmorSlot armorSlot);

MCAPI bool tryDispenseEquipment(
    ::BlockSource&                       region,
    ::Container&                         container,
    int                                  slot,
    ::BlockPos                           pos,
    ::SharedTypes::Legacy::EquipmentSlot equipmentSlot,
    bool                                 dispenseToPlayers
);
// NOLINTEND

} // namespace DispensableItemUtils
