#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/EquipmentSlot.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/SlotWithDropChance.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace EquipmentSlots {
// functions
// NOLINTBEGIN
MCAPI bool equipmentSlotRequiresIndex(::SharedTypes::Legacy::EquipmentSlot slot);

MCAPI char const* equipmentSlotToName(::SharedTypes::Legacy::EquipmentSlot slot);

MCAPI ::ArmorSlot getArmorSlotForEntityArmorEquipmentSlot(::EntityContext const& entityContext);

MCAPI ::SharedTypes::Legacy::EquipmentSlot hashedNameToEquipmentSlot(uint64 const& slotName);

MCAPI ::SharedTypes::Legacy::EquipmentSlot nameToEquipmentSlot(::std::string const& slotName);

MCAPI ::SlotWithDropChance nbtKeyToSlotWithDropChance(::std::string const& nbtKey);

MCAPI ::std::string slotWithDropChanceToNbtKey(::SlotWithDropChance slot);
// NOLINTEND

} // namespace EquipmentSlots
