#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"

class ItemUseInventoryTransaction : public ::ComplexInventoryTransaction {
public:
    // ItemUseInventoryTransaction inner types define
    enum class ActionType : int {
        Clear   = 0x0,
        UriOnly = 0x1,
        Named   = 0x2,
    };

    ActionType                 mActionType{};           // this+0x0
    BlockPos                   mBlockPos{};             // this+0x4
    uint32_t                   mTargetBlockRuntimeId{}; // this+0x10
    uint8_t                    mFace{};                 // this+0x14
    int32_t                    mSlot{};                 // this+0x18
    NetworkItemStackDescriptor mItemInHand{};           // this+0x20
    Vec3                       mPlayerPos{};            // this+0x30
    Vec3                       mClickPos{};             // this+0x3C

public:
    // prevent constructor by default
    ItemUseInventoryTransaction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemUseInventoryTransaction();

    // vIndex: 1
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 2
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 3
    virtual void postLoadItems(class BlockPalette& blockPalette, bool isClientSide);

    // vIndex: 4
    virtual ::InventoryTransactionError handle(class Player& player, bool isSenderAuthority) const;

    // vIndex: 5
    virtual void onTransactionError(class Player& player, ::InventoryTransactionError error) const;

    MCAPI ItemUseInventoryTransaction(class ItemUseInventoryTransaction const& transaction);

    MCAPI class ItemUseInventoryTransaction& operator=(class ItemUseInventoryTransaction const&);

    MCAPI void resendBlocksAroundArea(class Player& player, class BlockPos const& pos, uchar facing) const;

    MCAPI void resendPlayerState(class Player& player) const;

    MCAPI class ItemUseInventoryTransaction& setSelectedItem(class ItemStack const& item);

    MCAPI class ItemUseInventoryTransaction& setTargetBlock(class Block const& targetBlock);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class ItemUseInventoryTransaction const& transaction);

    MCAPI void dtor$();

    MCAPI ::InventoryTransactionError handle$(class Player& player, bool isSenderAuthority) const;

    MCAPI void onTransactionError$(class Player& player, ::InventoryTransactionError error) const;

    MCAPI void postLoadItems$(class BlockPalette& blockPalette, bool isClientSide);

    MCAPI class Bedrock::Result<void> read$(class ReadOnlyBinaryStream& stream);

    MCAPI void write$(class BinaryStream& stream) const;

    MCAPI static class BidirectionalUnorderedMap<::ItemUseInventoryTransaction::ActionType, std::string> const&
    actionTypeMap();

    // NOLINTEND
};
