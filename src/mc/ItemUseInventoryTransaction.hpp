/**
 * @file  ItemUseInventoryTransaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @vftbl  1
     * @symbol  ?read\@ItemUseInventoryTransaction\@\@UEAAXAEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual void read(class ReadOnlyBinaryStream &);
    /**
     * @vftbl  2
     * @symbol  ?write\@ItemUseInventoryTransaction\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  3
     * @symbol  ?postLoadItems\@ItemUseInventoryTransaction\@\@UEAAXAEAVBlockPalette\@\@_N\@Z
     */
    virtual void postLoadItems(class BlockPalette &, bool);
    /**
     * @vftbl  4
     * @symbol  ?handle\@ItemUseInventoryTransaction\@\@UEBA?AW4InventoryTransactionError\@\@AEAVPlayer\@\@_N\@Z
     */
    virtual enum class InventoryTransactionError handle(class Player &, bool) const;
    /**
     * @vftbl  5
     * @symbol  ?onTransactionError\@ItemUseInventoryTransaction\@\@UEBAXAEAVPlayer\@\@W4InventoryTransactionError\@\@\@Z
     */
    virtual void onTransactionError(class Player &, enum class InventoryTransactionError) const;
    /**
     * @symbol  ??0ItemUseInventoryTransaction\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemUseInventoryTransaction(class ItemUseInventoryTransaction const &);
    /**
     * @symbol  ??4ItemUseInventoryTransaction\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemUseInventoryTransaction & operator=(class ItemUseInventoryTransaction const &);
    /**
     * @symbol  ?resendBlocksAroundArea\@ItemUseInventoryTransaction\@\@QEBAXAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI void resendBlocksAroundArea(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol  ?resendPlayerState\@ItemUseInventoryTransaction\@\@QEBAXAEAVPlayer\@\@\@Z
     */
    MCAPI void resendPlayerState(class Player &) const;
    /**
     * @symbol  ?setSelectedItem\@ItemUseInventoryTransaction\@\@QEAAAEAV1\@AEBVItemStack\@\@\@Z
     */
    MCAPI class ItemUseInventoryTransaction & setSelectedItem(class ItemStack const &);

//private:

private:
    /**
     * @symbol  ?actionTypeMap\@ItemUseInventoryTransaction\@\@0V?$BidirectionalUnorderedMap\@W4ActionType\@ItemUseInventoryTransaction\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ItemUseInventoryTransaction::ActionType, std::string> const actionTypeMap;

};