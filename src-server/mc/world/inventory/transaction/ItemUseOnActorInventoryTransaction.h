#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/platform/Result.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ItemStack;
class Player;
class ReadOnlyBinaryStream;
// clang-format on

class ItemUseOnActorInventoryTransaction : public ::ComplexInventoryTransaction {
public:
    // ItemUseOnActorInventoryTransaction inner types define
    enum class ActionType : int {
        Interact     = 0,
        Attack       = 1,
        ItemInteract = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                                 mRuntimeId;
    ::ll::TypedStorage<4, 4, ::ItemUseOnActorInventoryTransaction::ActionType> mActionType;
    ::ll::TypedStorage<4, 4, int>                                              mSlot;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                    mItem;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mFromPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mHitPos;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemUseOnActorInventoryTransaction() /*override*/ = default;

    // vIndex: 1
    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 2
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 3
    virtual void postLoadItems(::BlockPalette& blockPalette, bool isClientSide) /*override*/;

    // vIndex: 5
    virtual void onTransactionError(::Player& player, ::InventoryTransactionError error) const /*override*/;

    // vIndex: 4
    virtual ::InventoryTransactionError handle(::Player& player, bool isSenderAuthority) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ItemUseOnActorInventoryTransaction& setSelectedItem(::ItemStack const& item);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& stream);

    MCAPI void $write(::BinaryStream& stream) const;

    MCFOLD void $postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    MCFOLD void $onTransactionError(::Player& player, ::InventoryTransactionError error) const;

    MCAPI ::InventoryTransactionError $handle(::Player& player, bool isSenderAuthority) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
