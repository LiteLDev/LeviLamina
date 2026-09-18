#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
// clang-format on

namespace TransactionOffhandUtils {
// functions
// NOLINTBEGIN
MCNAPI void setOrClearItem(::HandSlot handSlot, ::ItemStack const& item, ::Player& player);
// NOLINTEND

} // namespace TransactionOffhandUtils
