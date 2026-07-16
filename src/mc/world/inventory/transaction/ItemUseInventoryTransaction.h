#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/Result.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class Player;
class ReadOnlyBinaryStream;
// clang-format on

class ItemUseInventoryTransaction : public ::ComplexInventoryTransaction {
public:
    // ItemUseInventoryTransaction inner types define
    enum class ActionType : int {
        Place       = 0,
        Use         = 1,
        Destroy     = 2,
        UseAsAttack = 3,
    };

    enum class ClientCooldownState : uchar {
        Off = 0,
        On  = 1,
    };

    enum class PredictedResult : uchar {
        Failure = 0,
        Success = 1,
    };

    enum class TriggerType : uchar {
        Unknown        = 0,
        PlayerInput    = 1,
        SimulationTick = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemUseInventoryTransaction::ActionType>          mActionType;
    ::ll::TypedStorage<1, 1, ::ItemUseInventoryTransaction::TriggerType>         mTriggerType;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                        mPos;
    ::ll::TypedStorage<4, 4, uint>                                               mTargetBlockId;
    ::ll::TypedStorage<1, 1, uchar>                                              mFace;
    ::ll::TypedStorage<4, 4, int>                                                mSlot;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                      mItem;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mFromPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mClickPos;
    ::ll::TypedStorage<1, 1, ::ItemUseInventoryTransaction::PredictedResult>     mClientPredictedResult;
    ::ll::TypedStorage<1, 1, ::ItemUseInventoryTransaction::ClientCooldownState> mClientCooldownState;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemUseInventoryTransaction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemUseInventoryTransaction() /*override*/;

    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual void postLoadItems(::BlockPalette& blockPalette, bool isClientSide) /*override*/;

    virtual void onTransactionError(::Player& player, ::InventoryTransactionError error) const /*override*/;

    virtual ::InventoryTransactionError handle(::Player& player, bool isSenderAuthority) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemUseInventoryTransaction(::ItemUseInventoryTransaction const& transaction);

    MCAPI ::ItemUseInventoryTransaction& operator=(::ItemUseInventoryTransaction const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemUseInventoryTransaction const& transaction);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& stream);

    MCAPI void $write(::BinaryStream& stream) const;

    MCFOLD void $postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    MCAPI void $onTransactionError(::Player& player, ::InventoryTransactionError error) const;

    MCAPI ::InventoryTransactionError $handle(::Player& player, bool isSenderAuthority) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

// free functions
// NOLINTBEGIN
MCAPI bool operator==(::ItemUseInventoryTransaction const& lhs, ::ItemUseInventoryTransaction const& rhs);
// NOLINTEND
