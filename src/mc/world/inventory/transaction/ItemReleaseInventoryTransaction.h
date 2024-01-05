#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/InventoryTransactionError.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"

class ItemReleaseInventoryTransaction : public ::ComplexInventoryTransaction {
public:
    // ItemReleaseInventoryTransaction inner types define
    enum class ActionType {};

public:
    // prevent constructor by default
    ItemReleaseInventoryTransaction& operator=(ItemReleaseInventoryTransaction const&);
    ItemReleaseInventoryTransaction(ItemReleaseInventoryTransaction const&);
    ItemReleaseInventoryTransaction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ItemReleaseInventoryTransaction@@UEAA@XZ
    virtual ~ItemReleaseInventoryTransaction() = default;

    // vIndex: 1, symbol:
    // ?read@ItemReleaseInventoryTransaction@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 2, symbol: ?write@ItemReleaseInventoryTransaction@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 3, symbol: ?postLoadItems@ItemReleaseInventoryTransaction@@UEAAXAEAVBlockPalette@@_N@Z
    virtual void postLoadItems(class BlockPalette& blockPalette, bool isClientSide);

    // vIndex: 4, symbol: ?handle@ItemReleaseInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z
    virtual ::InventoryTransactionError handle(class Player& player, bool isSenderAuthority) const;

    // vIndex: 5, symbol:
    // ?onTransactionError@ItemReleaseInventoryTransaction@@UEBAXAEAVPlayer@@W4InventoryTransactionError@@@Z
    virtual void onTransactionError(class Player& player, ::InventoryTransactionError error) const;

    // NOLINTEND
};
