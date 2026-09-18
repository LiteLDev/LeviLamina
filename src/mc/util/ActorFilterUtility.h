#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/EquipmentLocation.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Mob;
// clang-format on

namespace ActorFilterUtility {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::ItemStack const*> getItemsInEquipmentSlots(::Mob const& mob, ::EquipmentLocation equipmentSlot);
// NOLINTEND

} // namespace ActorFilterUtility
