#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemTransactionLogger {
// NOLINTBEGIN
MCAPI void initializeLogger(bool enable);

MCAPI void log(std::string const& message);

MCAPI void log(class InventoryAction const& action, std::string const& message);

MCAPI void log(class InventoryTransactionPacket const& packet, std::string const& message);

MCAPI void log(class ItemStack const& item, std::string const& message);

MCAPI void log(class ItemStackResponsePacket const& packet, std::string const& message);
// NOLINTEND

}; // namespace ItemTransactionLogger
