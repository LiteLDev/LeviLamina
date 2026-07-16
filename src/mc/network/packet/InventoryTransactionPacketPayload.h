#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/InventoryMismatchData.h"
#include "mc/network/packet/NormalTransactionData.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"
#include "mc/world/inventory/transaction/ItemReleaseInventoryTransaction.h"
#include "mc/world/inventory/transaction/ItemUseInventoryTransaction.h"
#include "mc/world/inventory/transaction/ItemUseOnActorInventoryTransaction.h"

// auto generated forward declare list
// clang-format off
struct ItemStackLegacyRequestIdTag;
struct LegacySetSlot;
// clang-format on

struct InventoryTransactionPacketPayload {
public:
    // InventoryTransactionPacketPayload inner types define
    using ComplexTransactionVariant = ::std::variant<
        ::NormalTransactionData,
        ::InventoryMismatchData,
        ::ItemUseInventoryTransaction,
        ::ItemUseOnActorInventoryTransaction,
        ::ItemReleaseInventoryTransaction>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemStackLegacyRequestId>     mLegacyRequestId;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacySetSlot>> mLegacySetItemSlots;
    ::ll::TypedStorage<
        8,
        272,
        ::std::variant<
            ::NormalTransactionData,
            ::InventoryMismatchData,
            ::ItemUseInventoryTransaction,
            ::ItemUseOnActorInventoryTransaction,
            ::ItemReleaseInventoryTransaction>>
                                                                               mVariantTransaction;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ComplexInventoryTransaction>> mTransaction;
    ::ll::TypedStorage<1, 1, bool>                                             mIsClientSide;
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryTransactionPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    InventoryTransactionPacketPayload(::std::unique_ptr<::ComplexInventoryTransaction> transaction, bool isClientSide);

    MCAPI ~InventoryTransactionPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::ComplexInventoryTransaction> transaction, bool isClientSide);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
