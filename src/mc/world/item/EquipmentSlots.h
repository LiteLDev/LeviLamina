#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/world/item/SlotWithDropChance.h"

namespace EquipmentSlots {
// NOLINTBEGIN
MCAPI bool equipmentSlotRequiresIndex(::Puv::Legacy::EquipmentSlot slot);

MCAPI char const* equipmentSlotToName(::Puv::Legacy::EquipmentSlot slot);

MCAPI ::Puv::Legacy::EquipmentSlot hashedNameToEquipmentSlot(uint64 const& slotName);

MCAPI ::Puv::Legacy::EquipmentSlot nameToEquipmentSlot(std::string const& slotName);

MCAPI ::SlotWithDropChance nbtKeyToSlotWithDropChance(std::string const& nbtKey);

MCAPI std::string slotWithDropChanceToNbtKey(::SlotWithDropChance slot);
// NOLINTEND

}; // namespace EquipmentSlots
