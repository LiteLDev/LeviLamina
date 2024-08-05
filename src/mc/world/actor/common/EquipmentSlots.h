#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/enums/SlotWithDropChance.h"

namespace EquipmentSlots {
// NOLINTBEGIN
MCAPI bool equipmentSlotRequiresIndex(::Puv::Legacy::EquipmentSlot);

MCAPI char const* equipmentSlotToName(::Puv::Legacy::EquipmentSlot);

MCAPI ::Puv::Legacy::EquipmentSlot hashedNameToEquipmentSlot(uint64 const&);

MCAPI ::Puv::Legacy::EquipmentSlot nameToEquipmentSlot(std::string const&);

MCAPI ::SlotWithDropChance nbtKeyToSlotWithDropChance(std::string const&);

MCAPI std::string slotWithDropChanceToNbtKey(::SlotWithDropChance);
// NOLINTEND

}; // namespace EquipmentSlots
