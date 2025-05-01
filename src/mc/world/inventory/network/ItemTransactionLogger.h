#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InventoryAction;
class InventoryTransactionPacket;
class ItemStack;
class ItemStackResponsePacket;
// clang-format on

namespace ItemTransactionLogger {
// functions
// NOLINTBEGIN
MCNAPI void log(::InventoryAction const& action, ::std::string const& message);

MCNAPI void log(::ItemStack const& item, ::std::string const& message);

MCNAPI void log(::InventoryTransactionPacket const& packet, ::std::string const& message);

MCNAPI void log(::ItemStackResponsePacket const& packet, ::std::string const& message);
// NOLINTEND

} // namespace ItemTransactionLogger
