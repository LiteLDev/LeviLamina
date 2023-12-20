#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"

namespace EquipmentSlots {
// NOLINTBEGIN
// symbol: ?equipmentSlotToString@EquipmentSlots@@YAPEBDW4EquipmentSlot@Legacy@Puv@@@Z
MCAPI char const* equipmentSlotToString(::Puv::Legacy::EquipmentSlot);

// symbol: ?hashToEquipmentSlot@EquipmentSlots@@YA?AW4EquipmentSlot@Legacy@Puv@@AEB_K@Z
MCAPI ::Puv::Legacy::EquipmentSlot hashToEquipmentSlot(uint64 const&);

// symbol:
// ?stringToEquipmentSlot@EquipmentSlots@@YA?AW4EquipmentSlot@Legacy@Puv@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI ::Puv::Legacy::EquipmentSlot stringToEquipmentSlot(std::string const&);
// NOLINTEND

}; // namespace EquipmentSlots
