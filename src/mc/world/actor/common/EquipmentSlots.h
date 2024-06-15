#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/enums/SlotWithDropChance.h"

namespace EquipmentSlots {
// NOLINTBEGIN
// symbol: ?equipmentSlotRequiresIndex@EquipmentSlots@@YA_NW4EquipmentSlot@Legacy@Puv@@@Z
MCAPI bool equipmentSlotRequiresIndex(::Puv::Legacy::EquipmentSlot);

// symbol: ?equipmentSlotToName@EquipmentSlots@@YAPEBDW4EquipmentSlot@Legacy@Puv@@@Z
MCAPI char const* equipmentSlotToName(::Puv::Legacy::EquipmentSlot);

// symbol: ?hashedNameToEquipmentSlot@EquipmentSlots@@YA?AW4EquipmentSlot@Legacy@Puv@@AEB_K@Z
MCAPI ::Puv::Legacy::EquipmentSlot hashedNameToEquipmentSlot(uint64 const&);

// symbol:
// ?nameToEquipmentSlot@EquipmentSlots@@YA?AW4EquipmentSlot@Legacy@Puv@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI ::Puv::Legacy::EquipmentSlot nameToEquipmentSlot(std::string const&);

// symbol:
// ?nbtKeyToSlotWithDropChance@EquipmentSlots@@YA?AW4SlotWithDropChance@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI ::SlotWithDropChance nbtKeyToSlotWithDropChance(std::string const&);

// symbol:
// ?slotWithDropChanceToNbtKey@EquipmentSlots@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SlotWithDropChance@@@Z
MCAPI std::string slotWithDropChanceToNbtKey(::SlotWithDropChance);
// NOLINTEND

}; // namespace EquipmentSlots
