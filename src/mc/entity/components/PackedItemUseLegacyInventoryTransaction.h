#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/transaction/ItemUseInventoryTransaction.h"

// auto generated forward declare list
// clang-format off
struct ItemStackLegacyRequestIdTag;
// clang-format on

struct PackedItemUseLegacyInventoryTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::ItemStackLegacyRequestId>                                            mID;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ContainerEnumName, ::std::vector<uchar>>>> mSlots;
    ::ll::TypedStorage<8, 264, ::ItemUseInventoryTransaction>                                        mTransaction;
    // NOLINTEND

public:
    // prevent constructor by default
    PackedItemUseLegacyInventoryTransaction& operator=(PackedItemUseLegacyInventoryTransaction const&);
    PackedItemUseLegacyInventoryTransaction(PackedItemUseLegacyInventoryTransaction const&);
    PackedItemUseLegacyInventoryTransaction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackedItemUseLegacyInventoryTransaction(::PackedItemUseLegacyInventoryTransaction&&);

    MCAPI ~PackedItemUseLegacyInventoryTransaction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PackedItemUseLegacyInventoryTransaction&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
