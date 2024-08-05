#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/enums/ArmorSlot.h"

namespace DispensableItemUtils {
// NOLINTBEGIN
MCAPI void spawnLoot(class Level&, class Actor&, std::string const&);

MCAPI bool tryDispenseArmor(class BlockSource&, class Container&, int, class BlockPos, ::ArmorSlot);

MCAPI bool
tryDispenseEquipment(class BlockSource&, class Container&, int, class BlockPos, ::Puv::Legacy::EquipmentSlot, bool);
// NOLINTEND

}; // namespace DispensableItemUtils
