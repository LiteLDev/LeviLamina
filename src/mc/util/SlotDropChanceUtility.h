#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/SlotWithDropChance.h"

namespace SlotDropChanceUtility {
// NOLINTBEGIN
MCAPI float getForSlot(struct SlotDropChancesComponent const& component, ::SlotWithDropChance slot);

MCAPI struct SlotDropChancesComponent const& getOrDefault(class EntityContext& entity);

MCAPI void setDefaultChance(struct SlotDropChancesComponent& component, float dropChance);

MCAPI void setForSlot(struct SlotDropChancesComponent& component, ::SlotWithDropChance slot, float dropChance);

MCAPI void setForSlots(
    struct SlotDropChancesComponent&                    component,
    std::vector<struct EquipmentTableDropChance> const& dropChancesPerSlot
);
// NOLINTEND

}; // namespace SlotDropChanceUtility
