#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"

class ItemReleaseInventoryTransaction : public ::ComplexInventoryTransaction {
public:
    // ItemReleaseInventoryTransaction inner types define
    enum class ActionType : int32_t {
        Release = 0,
        Use     = 1,
    };

    ActionType                 mActionType{}; // this+0x00
    int32_t                    mSlot{};       // this+0x04
    NetworkItemStackDescriptor mItemInHand{}; // this+0x08
    Vec3                       mHeadPos{};    // this+0x18

public:
    // prevent constructor by default
    ItemReleaseInventoryTransaction& operator=(ItemReleaseInventoryTransaction const&);
    ItemReleaseInventoryTransaction(ItemReleaseInventoryTransaction const&);
    ItemReleaseInventoryTransaction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemReleaseInventoryTransaction() = default;

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

    // NOLINTEND
};
