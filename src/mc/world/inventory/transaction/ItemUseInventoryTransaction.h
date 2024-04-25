#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/enums/InventoryTransactionError.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"

class ItemUseInventoryTransaction : public ::ComplexInventoryTransaction {
public:
    // ItemUseInventoryTransaction inner types define
    enum class ActionType {};

public:
    // prevent constructor by default
    ItemUseInventoryTransaction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ItemUseInventoryTransaction@@UEAA@XZ
    virtual ~ItemUseInventoryTransaction();

    // vIndex: 1, symbol:
    // ?read@ItemUseInventoryTransaction@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 2, symbol: ?write@ItemUseInventoryTransaction@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 3, symbol: ?postLoadItems@ItemUseInventoryTransaction@@UEAAXAEAVBlockPalette@@_N@Z
    virtual void postLoadItems(class BlockPalette& blockPalette, bool isClientSide);

    // vIndex: 4, symbol: ?handle@ItemUseInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z
    virtual ::InventoryTransactionError handle(class Player& player, bool isSenderAuthority) const;

    // vIndex: 5, symbol:
    // ?onTransactionError@ItemUseInventoryTransaction@@UEBAXAEAVPlayer@@W4InventoryTransactionError@@@Z
    virtual void onTransactionError(class Player& player, ::InventoryTransactionError error) const;

    // symbol: ??0ItemUseInventoryTransaction@@QEAA@AEBV0@@Z
    MCAPI ItemUseInventoryTransaction(class ItemUseInventoryTransaction const&);

    // symbol: ??4ItemUseInventoryTransaction@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ItemUseInventoryTransaction& operator=(class ItemUseInventoryTransaction const&);

    // symbol: ?resendBlocksAroundArea@ItemUseInventoryTransaction@@QEBAXAEAVPlayer@@AEBVBlockPos@@E@Z
    MCAPI void resendBlocksAroundArea(class Player& player, class BlockPos const& pos, uchar facing) const;

    // symbol: ?resendPlayerState@ItemUseInventoryTransaction@@QEBAXAEAVPlayer@@@Z
    MCAPI void resendPlayerState(class Player& player) const;

    // symbol: ?setSelectedItem@ItemUseInventoryTransaction@@QEAAAEAV1@AEBVItemStack@@@Z
    MCAPI class ItemUseInventoryTransaction& setSelectedItem(class ItemStack const& item);

    // symbol: ?setTargetBlock@ItemUseInventoryTransaction@@QEAAAEAV1@AEBVBlock@@@Z
    MCAPI class ItemUseInventoryTransaction& setTargetBlock(class Block const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?actionTypeMap@ItemUseInventoryTransaction@@0V?$BidirectionalUnorderedMap@W4ActionType@ItemUseInventoryTransaction@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
    MCAPI static class BidirectionalUnorderedMap<::ItemUseInventoryTransaction::ActionType, std::string> const
        actionTypeMap;

    // NOLINTEND
};
