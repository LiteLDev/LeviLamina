#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class BlockPos;
class IItemUseTransactionSubject;
class ILegacyItemUseTransactionSubject;
class InventoryTransaction;
class ItemStack;
class Player;
class ReadOnlyBinaryStream;
// clang-format on

class ItemUseInventoryTransaction : public ::ComplexInventoryTransaction {
public:
    // ItemUseInventoryTransaction inner types define
    enum class ActionType : int {
        Place   = 0,
        Use     = 1,
        Destroy = 2,
    };

    enum class TriggerType : uchar {
        Unknown        = 0,
        PlayerInput    = 1,
        SimulationTick = 2,
    };

    enum class PredictedResult : uchar {
        Failure = 0,
        Success = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemUseInventoryTransaction::ActionType>      mActionType;
    ::ll::TypedStorage<1, 1, ::ItemUseInventoryTransaction::TriggerType>     mTriggerType;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition>                        mPos;
    ::ll::TypedStorage<4, 4, uint>                                           mTargetBlockId;
    ::ll::TypedStorage<1, 1, uchar>                                          mFace;
    ::ll::TypedStorage<4, 4, int>                                            mSlot;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                  mItem;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mFromPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mClickPos;
    ::ll::TypedStorage<1, 1, ::ItemUseInventoryTransaction::PredictedResult> mClientPredictedResult;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemUseInventoryTransaction() /*override*/;

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
    MCNAPI ItemUseInventoryTransaction();

    MCNAPI ItemUseInventoryTransaction(::ItemUseInventoryTransaction const&);

    MCNAPI explicit ItemUseInventoryTransaction(::InventoryTransaction const& transaction);

    MCNAPI ::InventoryTransactionError
    handle(::IItemUseTransactionSubject& player, ::ILegacyItemUseTransactionSubject& legacy, bool isSenderAuthority)
        const;

    MCNAPI ::ItemUseInventoryTransaction& operator=(::ItemUseInventoryTransaction const&);

    MCNAPI ::ItemUseInventoryTransaction& setSelectedItem(::ItemStack const& item);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void resendBlocksAroundArea(::Player& player, ::BlockPos const& pos, uchar facing);

    MCNAPI static void resendPlayerState(::Player& player);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<::ItemUseInventoryTransaction::ActionType, ::std::string> const&
    actionTypeMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ItemUseInventoryTransaction const&);

    MCNAPI void* $ctor(::InventoryTransaction const& transaction);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& stream);

    MCNAPI void $write(::BinaryStream& stream) const;

    MCNAPI void $postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    MCNAPI void $onTransactionError(::Player& player, ::InventoryTransactionError error) const;

    MCNAPI ::InventoryTransactionError $handle(::Player& player, bool isSenderAuthority) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
