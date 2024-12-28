#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/SlotWithDropChance.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct EquipmentTableDropChance;
struct SlotDropChancesComponent;
// clang-format on

namespace SlotDropChanceUtility {
// functions
// NOLINTBEGIN
MCAPI float getForSlot(::SlotDropChancesComponent const& component, ::SlotWithDropChance slot);

MCAPI ::SlotDropChancesComponent const& getOrDefault(::EntityContext& entity);

MCAPI void setDefaultChance(::SlotDropChancesComponent& component, float dropChance);

MCAPI void setForSlot(::SlotDropChancesComponent& component, ::SlotWithDropChance slot, float dropChance);

MCAPI void
setForSlots(::SlotDropChancesComponent& component, ::std::vector<::EquipmentTableDropChance> const& dropChancesPerSlot);
// NOLINTEND

} // namespace SlotDropChanceUtility
