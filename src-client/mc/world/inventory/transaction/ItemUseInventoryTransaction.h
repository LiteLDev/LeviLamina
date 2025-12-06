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
class InventoryTransaction;
class ItemStack;
class Player;
class ReadOnlyBinaryStream;
struct IItemUseTransactionSubject;
struct ILegacyItemUseTransactionSubject;
// clang-format on

class ItemUseInventoryTransaction : public ::ComplexInventoryTransaction {
public:
    // ItemUseInventoryTransaction inner types define
    enum class ActionType : uint {};

    enum class TriggerType : uint {};

    enum class PredictedResult : uint {};

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
    MCAPI ItemUseInventoryTransaction();

    MCAPI ItemUseInventoryTransaction(::ItemUseInventoryTransaction const&);

    MCAPI explicit ItemUseInventoryTransaction(::InventoryTransaction const& transaction);

    MCAPI ::InventoryTransactionError handle(
        ::IItemUseTransactionSubject&       player,
        ::ILegacyItemUseTransactionSubject& legacy,
        bool                                isSenderAuthority
    ) const;

    MCAPI ::ItemUseInventoryTransaction& operator=(::ItemUseInventoryTransaction const&);

    MCAPI ::ItemUseInventoryTransaction& setSelectedItem(::ItemStack const& item);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void resendBlocksAroundArea(::Player& player, ::BlockPos const& pos, uchar facing);

    MCAPI static void resendPlayerState(::Player& player);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BidirectionalUnorderedMap<::ItemUseInventoryTransaction::ActionType, ::std::string> const&
    actionTypeMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ItemUseInventoryTransaction const&);

    MCAPI void* $ctor(::InventoryTransaction const& transaction);
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
