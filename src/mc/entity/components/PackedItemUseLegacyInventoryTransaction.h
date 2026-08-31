#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/transaction/ItemUseInventoryTransaction.h"

// auto generated forward declare list
// clang-format off
struct ItemStackLegacyRequestIdTag;
struct LegacySetSlot;
// clang-format on

struct PackedItemUseLegacyInventoryTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemStackLegacyRequestId>     mID;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacySetSlot>> mSlots;
    ::ll::TypedStorage<8, 264, ::ItemUseInventoryTransaction> mTransaction;
    // NOLINTEND
};
