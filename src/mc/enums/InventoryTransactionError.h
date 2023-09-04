#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class InventoryTransactionError : int {
    Unknown            = 0x0,
    NoError            = 0x1,
    BalanceMismatch    = 0x2,
    SourceItemMismatch = 0x3,
    InventoryMismatch  = 0x4,
    SizeMismatch       = 0x5,
    AuthorityMismatch  = 0x6,
    StateMismatch      = 0x7,
    ApiDenied          = 0x8,
};
