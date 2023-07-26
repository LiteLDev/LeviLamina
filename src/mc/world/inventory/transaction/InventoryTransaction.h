#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"

class InventoryTransaction {

public:
    // prevent constructor by default
    InventoryTransaction& operator=(InventoryTransaction const&) = delete;
    InventoryTransaction()                                       = delete;

public:
    /**
     * @symbol ??0InventoryTransaction\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI InventoryTransaction(class InventoryTransaction const&); // NOLINT
    /**
     * @symbol ?_logTransaction\@InventoryTransaction\@\@QEBAX_N\@Z
     */
    MCAPI void _logTransaction(bool) const; // NOLINT
    /**
     * @symbol ?addAction\@InventoryTransaction\@\@QEAAXAEBVInventoryAction\@\@\@Z
     */
    MCAPI void addAction(class InventoryAction const&); // NOLINT
    /**
     * @symbol ?executeFull\@InventoryTransaction\@\@QEBA?AW4InventoryTransactionError\@\@AEAVPlayer\@\@_N\@Z
     */
    MCAPI enum class InventoryTransactionError executeFull(class Player&, bool) const; // NOLINT
    /**
     * @symbol ?forceBalanceTransaction\@InventoryTransaction\@\@QEAAXXZ
     */
    MCAPI void forceBalanceTransaction(); // NOLINT
    /**
     * @symbol
     * ?getActions\@InventoryTransaction\@\@QEBAAEBV?$vector\@VInventoryAction\@\@V?$allocator\@VInventoryAction\@\@\@std\@\@\@std\@\@AEBVInventorySource\@\@\@Z
     */
    MCAPI std::vector<class InventoryAction> const& getActions(class InventorySource const&) const; // NOLINT
    /**
     * @symbol
     * ?getVerifyFunction\@InventoryTransaction\@\@QEBA?AV?$function\@$$A6A?AW4InventoryTransactionError\@\@AEAVPlayer\@\@AEBVInventoryAction\@\@_N\@Z\@std\@\@AEBVInventorySource\@\@\@Z
     */
    MCAPI class std::function<enum class InventoryTransactionError(class Player&, class InventoryAction const&, bool)>
    getVerifyFunction(class InventorySource const&) const; // NOLINT
    /**
     * @symbol ?postLoadItems\@InventoryTransaction\@\@QEAAXAEAVBlockPalette\@\@_N\@Z
     */
    MCAPI void postLoadItems(class BlockPalette&, bool); // NOLINT
    /**
     * @symbol ?serialize\@InventoryTransaction\@\@QEBAXAEAVBinaryStream\@\@_N\@Z
     */
    MCAPI void serialize(class BinaryStream&, bool) const; // NOLINT
    /**
     * @symbol ?verifyFull\@InventoryTransaction\@\@QEBA?AW4InventoryTransactionError\@\@AEAVPlayer\@\@_N\@Z
     */
    MCAPI enum class InventoryTransactionError verifyFull(class Player&, bool) const; // NOLINT
    /**
     * @symbol ??1InventoryTransaction\@\@QEAA\@XZ
     */
    MCAPI ~InventoryTransaction(); // NOLINT
    /**
     * @symbol ?checkTransactionItemsMatch\@InventoryTransaction\@\@SA_NAEBVItemStack\@\@0\@Z
     */
    MCAPI static bool checkTransactionItemsMatch(class ItemStack const&, class ItemStack const&); // NOLINT
    /**
     * @symbol
     * ?deserialize\@InventoryTransaction\@\@SA?AV?$Result\@VInventoryTransaction\@\@Verror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<class InventoryTransaction, class std::error_code>
    deserialize(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @symbol
     * ?getInventoryTransactionErrorName\@InventoryTransaction\@\@SA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4InventoryTransactionError\@\@\@Z
     */
    MCAPI static std::string const getInventoryTransactionErrorName(enum class InventoryTransactionError); // NOLINT

    // private:
    /**
     * @symbol ?addItemToContent\@InventoryTransaction\@\@AEAAXAEBVItemStack\@\@H\@Z
     */
    MCAPI void addItemToContent(class ItemStack const&, int); // NOLINT

private:
    /**
     * @symbol
     * ?inventoryTransactionErrorMap\@InventoryTransaction\@\@0V?$BidirectionalUnorderedMap\@W4InventoryTransactionError\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class InventoryTransactionError, std::string> const
        inventoryTransactionErrorMap; // NOLINT
};
