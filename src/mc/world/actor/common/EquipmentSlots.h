#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/EquipmentSlot.h"

namespace EquipmentSlots {
// NOLINTBEGIN
// symbol: ?equipmentSlotToString@EquipmentSlots@@YAPEBDW4EquipmentSlot@@@Z
MCAPI char const* equipmentSlotToString(::EquipmentSlot);

// symbol: ?hashToEquipmentSlot@EquipmentSlots@@YA?AW4EquipmentSlot@@AEB_K@Z
MCAPI ::EquipmentSlot hashToEquipmentSlot(uint64 const&);

// symbol:
// ?stringToEquipmentSlot@EquipmentSlots@@YA?AW4EquipmentSlot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI ::EquipmentSlot stringToEquipmentSlot(std::string const&);
// NOLINTEND

}; // namespace EquipmentSlots
