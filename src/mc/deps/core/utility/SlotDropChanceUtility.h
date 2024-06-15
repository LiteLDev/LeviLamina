#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SlotWithDropChance.h"

namespace SlotDropChanceUtility {
// NOLINTBEGIN
// symbol: ?getForSlot@SlotDropChanceUtility@@YAMAEBUSlotDropChancesComponent@@W4SlotWithDropChance@@@Z
MCAPI float getForSlot(struct SlotDropChancesComponent const&, ::SlotWithDropChance);

// symbol: ?getOrDefault@SlotDropChanceUtility@@YAAEBUSlotDropChancesComponent@@AEAVEntityContext@@@Z
MCAPI struct SlotDropChancesComponent const& getOrDefault(class EntityContext&);

// symbol: ?setDefaultChance@SlotDropChanceUtility@@YAXAEAUSlotDropChancesComponent@@M@Z
MCAPI void setDefaultChance(struct SlotDropChancesComponent&, float);

// symbol: ?setForSlot@SlotDropChanceUtility@@YAXAEAUSlotDropChancesComponent@@W4SlotWithDropChance@@M@Z
MCAPI void setForSlot(struct SlotDropChancesComponent&, ::SlotWithDropChance, float);

// symbol:
// ?setForSlots@SlotDropChanceUtility@@YAXAEAUSlotDropChancesComponent@@AEBV?$vector@UEquipmentTableDropChance@@V?$allocator@UEquipmentTableDropChance@@@std@@@std@@@Z
MCAPI void setForSlots(struct SlotDropChancesComponent&, std::vector<struct EquipmentTableDropChance> const&);
// NOLINTEND

}; // namespace SlotDropChanceUtility
