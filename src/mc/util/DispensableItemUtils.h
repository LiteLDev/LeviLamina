#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/enums/ArmorSlot.h"

namespace DispensableItemUtils {
// NOLINTBEGIN
// symbol:
// ?spawnLoot@DispensableItemUtils@@YAXAEAVLevel@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void spawnLoot(class Level&, class Actor&, std::string const&);

// symbol: ?tryDispenseArmor@DispensableItemUtils@@YA_NAEAVBlockSource@@AEAVContainer@@HVBlockPos@@W4ArmorSlot@@@Z
MCAPI bool tryDispenseArmor(class BlockSource&, class Container&, int, class BlockPos, ::ArmorSlot);

// symbol:
// ?tryDispenseEquipment@DispensableItemUtils@@YA_NAEAVBlockSource@@AEAVContainer@@HVBlockPos@@W4EquipmentSlot@Legacy@Puv@@_N@Z
MCAPI bool
tryDispenseEquipment(class BlockSource&, class Container&, int, class BlockPos, ::Puv::Legacy::EquipmentSlot, bool);
// NOLINTEND

}; // namespace DispensableItemUtils
