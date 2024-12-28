#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class InventoryTransactionError : int {
    Unknown            = 0,
    NoError            = 1,
    BalanceMismatch    = 2,
    SourceItemMismatch = 3,
    InventoryMismatch  = 4,
    SizeMismatch       = 5,
    AuthorityMismatch  = 6,
    StateMismatch      = 7,
    ApiDenied          = 8,
};
