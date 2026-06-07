#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InventoryPacketHandler;
// clang-format on

struct ServerPlayerInventoryTransactionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::InventoryPacketHandler>> mCurrentTransactions;
    // NOLINTEND
};
