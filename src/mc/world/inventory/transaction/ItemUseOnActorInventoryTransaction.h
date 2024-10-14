#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"

class ItemUseOnActorInventoryTransaction : public ::ComplexInventoryTransaction {
public:
    // ItemUseOnActorInventoryTransaction inner types define
    enum class ActionType {};

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI ::InventoryTransactionError handle$(class Player& player, bool isSenderAuthority) const;

    MCAPI void onTransactionError$(class Player& player, ::InventoryTransactionError) const;

    MCAPI void postLoadItems$(class BlockPalette& blockPalette, bool isClientSide);

    MCAPI class Bedrock::Result<void> read$(class ReadOnlyBinaryStream& stream);

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
