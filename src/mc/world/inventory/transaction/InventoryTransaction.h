#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/enums/InventoryTransactionError.h"

class InventoryTransaction {
public:
    // prevent constructor by default
    InventoryTransaction& operator=(InventoryTransaction const&);
    InventoryTransaction();

public:
    // NOLINTBEGIN
    MCAPI InventoryTransaction(class InventoryTransaction const&);

    MCAPI void _logTransaction(bool isClientSide) const;

    MCAPI void addAction(class InventoryAction const& action);

    MCAPI ::InventoryTransactionError executeFull(class Player& p, bool isSenderAuthority) const;

    MCAPI void forceBalanceTransaction();

    MCAPI std::vector<class InventoryAction> const& getActions(class InventorySource const& source) const;

    MCAPI std::function<::InventoryTransactionError(class Player&, class InventoryAction const&, bool)>
          getVerifyFunction(class InventorySource const& source) const;

    MCAPI void postLoadItems(class BlockPalette& blockPalette, bool isClientSide);

    MCAPI void serialize(class BinaryStream& stream, bool isClientSide) const;

    MCAPI ::InventoryTransactionError verifyFull(class Player& p, bool isSenderAuthority) const;

    MCAPI ~InventoryTransaction();

    MCAPI static bool checkTransactionItemsMatch(class ItemStack const&, class ItemStack const&);

    MCAPI static class Bedrock::Result<class InventoryTransaction> deserialize(class ReadOnlyBinaryStream& stream);

    MCAPI static std::string const getInventoryTransactionErrorName(::InventoryTransactionError);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void addItemToContent(class ItemStack const& item, int count);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BidirectionalUnorderedMap<::InventoryTransactionError, std::string> const
        inventoryTransactionErrorMap;

    // NOLINTEND
};
