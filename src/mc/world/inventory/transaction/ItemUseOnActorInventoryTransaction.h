#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/InventoryTransactionError.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"

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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ItemUseOnActorInventoryTransaction() = default;

    // vIndex: 1, symbol:
    // ?read@ItemUseOnActorInventoryTransaction@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream&);

    // vIndex: 2, symbol: ?write@ItemUseOnActorInventoryTransaction@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 3, symbol: ?postLoadItems@ItemUseOnActorInventoryTransaction@@UEAAXAEAVBlockPalette@@_N@Z
    virtual void postLoadItems(class BlockPalette&, bool);

    // vIndex: 4, symbol:
    // ?handle@ItemUseOnActorInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z
    virtual ::InventoryTransactionError handle(class Player&, bool) const;

    // vIndex: 5, symbol:
    // ?onTransactionError@ItemUseOnActorInventoryTransaction@@UEBAXAEAVPlayer@@W4InventoryTransactionError@@@Z
    virtual void onTransactionError(class Player&, ::InventoryTransactionError) const;

    // symbol: ?setSelectedItem@ItemUseOnActorInventoryTransaction@@QEAAAEAV1@AEBVItemStack@@@Z
    MCAPI class ItemUseOnActorInventoryTransaction& setSelectedItem(class ItemStack const&);

    // NOLINTEND
};
