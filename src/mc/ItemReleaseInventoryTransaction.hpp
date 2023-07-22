/**
 * @file  ItemReleaseInventoryTransaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemReleaseInventoryTransaction.
 *
 */
class ItemReleaseInventoryTransaction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMRELEASEINVENTORYTRANSACTION
public:
    class ItemReleaseInventoryTransaction& operator=(class ItemReleaseInventoryTransaction const &) = delete;
    ItemReleaseInventoryTransaction(class ItemReleaseInventoryTransaction const &) = delete;
    ItemReleaseInventoryTransaction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemReleaseInventoryTransaction();
    /**
     * @vftbl  1
     * @symbol  ?read\@ItemReleaseInventoryTransaction\@\@UEAAXAEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual void read(class ReadOnlyBinaryStream &);
    /**
     * @vftbl  2
     * @symbol  ?write\@ItemReleaseInventoryTransaction\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  3
     * @symbol  ?postLoadItems\@ItemReleaseInventoryTransaction\@\@UEAAXAEAVBlockPalette\@\@_N\@Z
     */
    virtual void postLoadItems(class BlockPalette &, bool);
    /**
     * @vftbl  4
     * @symbol  ?handle\@ItemReleaseInventoryTransaction\@\@UEBA?AW4InventoryTransactionError\@\@AEAVPlayer\@\@_N\@Z
     */
    virtual enum class InventoryTransactionError handle(class Player &, bool) const;
    /**
     * @vftbl  5
     * @symbol  ?onTransactionError\@ItemReleaseInventoryTransaction\@\@UEBAXAEAVPlayer\@\@W4InventoryTransactionError\@\@\@Z
     */
    virtual void onTransactionError(class Player &, enum class InventoryTransactionError) const;

};