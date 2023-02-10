/**
 * @file  ItemUseInventoryTransaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemUseInventoryTransaction.
 *
 */
class ItemUseInventoryTransaction {

#define AFTER_EXTRA
// Add Member There
public:
enum class ActionType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEINVENTORYTRANSACTION
public:
    ItemUseInventoryTransaction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemUseInventoryTransaction();
    /**
     * @hash   -1029691718
     * @vftbl  1
     * @symbol  ?read\@ItemUseInventoryTransaction\@\@UEAAXAEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual void read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1738599106
     * @vftbl  2
     * @symbol  ?write\@ItemUseInventoryTransaction\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1295412513
     * @vftbl  3
     * @symbol  ?postLoadItems\@ItemUseInventoryTransaction\@\@UEAAXAEAVBlockPalette\@\@_N\@Z
     */
    virtual void postLoadItems(class BlockPalette &, bool);
    /**
     * @hash   562385707
     * @vftbl  4
     * @symbol  ?handle\@ItemUseInventoryTransaction\@\@UEBA?AW4InventoryTransactionError\@\@AEAVPlayer\@\@_N\@Z
     */
    virtual enum class InventoryTransactionError handle(class Player &, bool) const;
    /**
     * @hash   -569117014
     * @vftbl  5
     * @symbol  ?onTransactionError\@ItemUseInventoryTransaction\@\@UEBAXAEAVPlayer\@\@W4InventoryTransactionError\@\@\@Z
     */
    virtual void onTransactionError(class Player &, enum class InventoryTransactionError) const;
    /**
     * @hash   -1752554063
     * @symbol  ??0ItemUseInventoryTransaction\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemUseInventoryTransaction(class ItemUseInventoryTransaction const &);
    /**
     * @hash   1922405500
     * @symbol  ??4ItemUseInventoryTransaction\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemUseInventoryTransaction & operator=(class ItemUseInventoryTransaction const &);
    /**
     * @hash   -1705140795
     * @symbol  ?resendBlocksAroundArea\@ItemUseInventoryTransaction\@\@QEBAXAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI void resendBlocksAroundArea(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -969358428
     * @symbol  ?resendPlayerState\@ItemUseInventoryTransaction\@\@QEBAXAEAVPlayer\@\@\@Z
     */
    MCAPI void resendPlayerState(class Player &) const;
    /**
     * @hash   -269814512
     * @symbol  ?setSelectedItem\@ItemUseInventoryTransaction\@\@QEAAAEAV1\@AEBVItemStack\@\@\@Z
     */
    MCAPI class ItemUseInventoryTransaction & setSelectedItem(class ItemStack const &);

//private:

private:
    /**
     * @hash   1183641917
     * @symbol  ?actionTypeMap\@ItemUseInventoryTransaction\@\@0V?$BidirectionalUnorderedMap\@W4ActionType\@ItemUseInventoryTransaction\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ItemUseInventoryTransaction::ActionType, std::string> const actionTypeMap;

};