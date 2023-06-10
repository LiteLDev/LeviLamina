/**
 * @file  InventoryTransaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "InventoryTransactionItemGroup.hpp"
#include "InventoryAction.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class InventoryTransaction.
 *
 */
class InventoryTransaction {

#define AFTER_EXTRA
// Add Member There
public:
    std::unordered_map<class InventorySource, std::vector<class InventoryAction>> actions; // 0x0
    std::vector<class InventoryTransactionItemGroup> items;                                // 0x40

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYTRANSACTION
public:
    class InventoryTransaction& operator=(class InventoryTransaction const &) = delete;
    InventoryTransaction() = delete;
#endif

public:
    /**
     * @symbol ??0InventoryTransaction\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI InventoryTransaction(class InventoryTransaction const &);
    /**
     * @symbol ?_logTransaction\@InventoryTransaction\@\@QEBAX_N\@Z
     */
    MCAPI void _logTransaction(bool) const;
    /**
     * @symbol ?addAction\@InventoryTransaction\@\@QEAAXAEBVInventoryAction\@\@\@Z
     */
    MCAPI void addAction(class InventoryAction const &);
    /**
     * @symbol ?executeFull\@InventoryTransaction\@\@QEBA?AW4InventoryTransactionError\@\@AEAVPlayer\@\@_N\@Z
     */
    MCAPI enum class InventoryTransactionError executeFull(class Player &, bool) const;
    /**
     * @symbol ?forceBalanceTransaction\@InventoryTransaction\@\@QEAAXXZ
     */
    MCAPI void forceBalanceTransaction();
    /**
     * @symbol ?getActions\@InventoryTransaction\@\@QEBAAEBV?$vector\@VInventoryAction\@\@V?$allocator\@VInventoryAction\@\@\@std\@\@\@std\@\@AEBVInventorySource\@\@\@Z
     */
    MCAPI std::vector<class InventoryAction> const & getActions(class InventorySource const &) const;
    /**
     * @symbol ?getVerifyFunction\@InventoryTransaction\@\@QEBA?AV?$function\@$$A6A?AW4InventoryTransactionError\@\@AEAVPlayer\@\@AEBVInventoryAction\@\@_N\@Z\@std\@\@AEBVInventorySource\@\@\@Z
     */
    MCAPI class std::function<enum class InventoryTransactionError (class Player &, class InventoryAction const &, bool)> getVerifyFunction(class InventorySource const &) const;
    /**
     * @symbol ?postLoadItems\@InventoryTransaction\@\@QEAAXAEAVBlockPalette\@\@_N\@Z
     */
    MCAPI void postLoadItems(class BlockPalette &, bool);
    /**
     * @symbol ?serialize\@InventoryTransaction\@\@QEBAXAEAVBinaryStream\@\@_N\@Z
     */
    MCAPI void serialize(class BinaryStream &, bool) const;
    /**
     * @symbol ?verifyFull\@InventoryTransaction\@\@QEBA?AW4InventoryTransactionError\@\@AEAVPlayer\@\@_N\@Z
     */
    MCAPI enum class InventoryTransactionError verifyFull(class Player &, bool) const;
    /**
     * @symbol ??1InventoryTransaction\@\@QEAA\@XZ
     */
    MCAPI ~InventoryTransaction();
    /**
     * @symbol ?checkTransactionItemsMatch\@InventoryTransaction\@\@SA_NAEBVItemStack\@\@0\@Z
     */
    MCAPI static bool checkTransactionItemsMatch(class ItemStack const &, class ItemStack const &);
    /**
     * @symbol ?deserialize\@InventoryTransaction\@\@SA?AV1\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class InventoryTransaction deserialize(class ReadOnlyBinaryStream &);
    /**
     * @symbol ?getInventoryTransactionErrorName\@InventoryTransaction\@\@SA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4InventoryTransactionError\@\@\@Z
     */
    MCAPI static std::string const getInventoryTransactionErrorName(enum class InventoryTransactionError);

//private:
    /**
     * @symbol ?addItemToContent\@InventoryTransaction\@\@AEAAXAEBVItemStack\@\@H\@Z
     */
    MCAPI void addItemToContent(class ItemStack const &, int);

private:
    /**
     * @symbol ?inventoryTransactionErrorMap\@InventoryTransaction\@\@0V?$BidirectionalUnorderedMap\@W4InventoryTransactionError\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class InventoryTransactionError, std::string> const inventoryTransactionErrorMap;

};
