#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/SlotWithDropChance.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct EquipmentTableDropChance;
struct SlotDropChancesComponent;
// clang-format on

namespace SlotDropChanceUtility {
// functions
// NOLINTBEGIN
MCNAPI float getForSlot(::SlotDropChancesComponent const& component, ::SharedTypes::Legacy::SlotWithDropChance slot);

MCNAPI ::SlotDropChancesComponent const& getOrDefault(::EntityContext& entity);

MCNAPI void setDefaultChance(::SlotDropChancesComponent& component, float dropChance);

MCNAPI void
setForSlot(::SlotDropChancesComponent& component, ::SharedTypes::Legacy::SlotWithDropChance slot, float dropChance);

MCNAPI void
setForSlots(::SlotDropChancesComponent& component, ::std::vector<::EquipmentTableDropChance> const& dropChancesPerSlot);
// NOLINTEND

} // namespace SlotDropChanceUtility
