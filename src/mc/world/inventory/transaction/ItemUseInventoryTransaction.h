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

    MCAPI ItemUseInventoryTransaction(class ItemUseInventoryTransaction const&);

    MCAPI class ItemUseInventoryTransaction& operator=(class ItemUseInventoryTransaction const&);

    MCAPI void resendBlocksAroundArea(class Player& player, class BlockPos const& pos, uchar facing) const;

    MCAPI void resendPlayerState(class Player& player) const;

    MCAPI class ItemUseInventoryTransaction& setSelectedItem(class ItemStack const& item);

    MCAPI class ItemUseInventoryTransaction& setTargetBlock(class Block const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BidirectionalUnorderedMap<::ItemUseInventoryTransaction::ActionType, std::string> const
        actionTypeMap;

    // NOLINTEND
};
