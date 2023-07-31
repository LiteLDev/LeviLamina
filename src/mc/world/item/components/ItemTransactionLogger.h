#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemTransactionLogger {
// NOLINTBEGIN
/**
 * @symbol ?initializeLogger\@ItemTransactionLogger\@\@YAX_N\@Z
 */
MCAPI void initializeLogger(bool);
/**
 * @symbol
 * ?log\@ItemTransactionLogger\@\@YAXAEBVItemStackResponsePacket\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void log(class ItemStackResponsePacket const&, std::string const&);
/**
 * @symbol
 * ?log\@ItemTransactionLogger\@\@YAXAEBVInventoryAction\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void log(class InventoryAction const&, std::string const&);
/**
 * @symbol
 * ?log\@ItemTransactionLogger\@\@YAXAEBVItemStack\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void log(class ItemStack const&, std::string const&);
/**
 * @symbol
 * ?log\@ItemTransactionLogger\@\@YAXAEBVInventoryTransactionPacket\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void log(class InventoryTransactionPacket const&, std::string const&);
/**
 * @symbol
 * ?log\@ItemTransactionLogger\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void log(std::string const&);
// NOLINTEND

}; // namespace ItemTransactionLogger
