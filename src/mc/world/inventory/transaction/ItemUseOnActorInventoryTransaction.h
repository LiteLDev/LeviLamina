#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"

class ItemUseOnActorInventoryTransaction : public ::ComplexInventoryTransaction {
public:
    // ItemUseOnActorInventoryTransaction inner types define
    enum class ActionType : int32_t {
        Interact     = 0,
        Attack       = 1,
        ItemInteract = 2,
    };

    uint64_t                   mActorId{};    // this+0x00
    ActionType                 mActionType{}; // this+0x08
    int32_t                    mSlot{};       // this+0x0C
    NetworkItemStackDescriptor mItemInHand{}; // this+0x10
    Vec3                       mPlayerPos{};  // this+0x20
    Vec3                       mClickPos{};   // this+0x2C

public:
    // prevent constructor by default
    ItemUseOnActorInventoryTransaction& operator=(ItemUseOnActorInventoryTransaction const&);
    ItemUseOnActorInventoryTransaction(ItemUseOnActorInventoryTransaction const&);
    ItemUseOnActorInventoryTransaction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemUseOnActorInventoryTransaction() = default;

    // vIndex: 1
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 2
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 3
    virtual void postLoadItems(class BlockPalette& blockPalette, bool isClientSide);

    // vIndex: 4
    virtual ::InventoryTransactionError handle(class Player& player, bool isSenderAuthority) const;

    // vIndex: 5
    virtual void onTransactionError(class Player& player, ::InventoryTransactionError) const;

    MCAPI class ItemUseOnActorInventoryTransaction& setSelectedItem(class ItemStack const& item);

    // NOLINTEND
};
