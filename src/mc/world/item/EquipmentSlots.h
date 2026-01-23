#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deps/shared_types/legacy/actor/SlotWithDropChance.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace EquipmentSlots {
// functions
// NOLINTBEGIN
MCAPI char const* equipmentSlotToName(::SharedTypes::Legacy::EquipmentSlot slot);

MCAPI ::SharedTypes::Legacy::ArmorSlot getArmorSlotForEntityArmorEquipmentSlot(::EntityContext const& entityContext);

MCAPI ::SharedTypes::Legacy::EquipmentSlot hashedNameToEquipmentSlot(uint64 const& slotName);

MCAPI ::SharedTypes::Legacy::EquipmentSlot nameToEquipmentSlot(::std::string const& slotName);

MCAPI ::SharedTypes::Legacy::SlotWithDropChance nbtKeyToSlotWithDropChance(::std::string const& nbtKey);

MCAPI ::std::string slotWithDropChanceToNbtKey(::SharedTypes::Legacy::SlotWithDropChance slot);
// NOLINTEND

} // namespace EquipmentSlots
