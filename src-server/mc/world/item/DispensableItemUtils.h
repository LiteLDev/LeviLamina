#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"

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

MCAPI bool tryDispenseEquipment(::BlockSource& region, ::Container& container, int slot, ::BlockPos pos, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, bool dispenseToPlayers);
// NOLINTEND

}
