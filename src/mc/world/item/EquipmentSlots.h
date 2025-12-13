#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deps/shared_types/legacy/actor/SlotWithDropChance.h"
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace EquipmentSlots {
// functions
// NOLINTBEGIN
MCNAPI char const* equipmentSlotToName(::SharedTypes::Legacy::EquipmentSlot slot);

MCNAPI ::SharedTypes::Legacy::ArmorSlot getArmorSlotForEntityArmorEquipmentSlot(::EntityContext const& entityContext);

MCNAPI ::SharedTypes::Legacy::EquipmentSlot hashedNameToEquipmentSlot(uint64 const& slotName);

MCNAPI ::SharedTypes::Legacy::EquipmentSlot nameToEquipmentSlot(::std::string const& slotName);

MCNAPI ::SharedTypes::Legacy::SlotWithDropChance nbtKeyToSlotWithDropChance(::std::string const& nbtKey);

MCNAPI ::std::string slotWithDropChanceToNbtKey(::SharedTypes::Legacy::SlotWithDropChance slot);
// NOLINTEND

} // namespace EquipmentSlots
