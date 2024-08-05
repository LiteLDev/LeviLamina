#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SlotWithDropChance.h"

namespace SlotDropChanceUtility {
// NOLINTBEGIN
MCAPI float getForSlot(struct SlotDropChancesComponent const&, ::SlotWithDropChance);

MCAPI struct SlotDropChancesComponent const& getOrDefault(class EntityContext&);

MCAPI void setDefaultChance(struct SlotDropChancesComponent&, float);

MCAPI void setForSlot(struct SlotDropChancesComponent&, ::SlotWithDropChance, float);

MCAPI void setForSlots(struct SlotDropChancesComponent&, std::vector<struct EquipmentTableDropChance> const&);
// NOLINTEND

}; // namespace SlotDropChanceUtility
