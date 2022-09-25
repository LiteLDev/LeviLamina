/**
 * @file  ItemUseOnActorInventoryTransaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemUseOnActorInventoryTransaction.
 *
 */
class ItemUseOnActorInventoryTransaction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEONACTORINVENTORYTRANSACTION
public:
    class ItemUseOnActorInventoryTransaction& operator=(class ItemUseOnActorInventoryTransaction const &) = delete;
    ItemUseOnActorInventoryTransaction(class ItemUseOnActorInventoryTransaction const &) = delete;
    ItemUseOnActorInventoryTransaction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ItemUseOnActorInventoryTransaction();
    /**
     * @hash   1887796568
     * @vftbl  1
     * @symbol ?read@ItemUseOnActorInventoryTransaction@@UEAAXAEAVReadOnlyBinaryStream@@@Z
     */
    virtual void read(class ReadOnlyBinaryStream &);
    /**
     * @hash   94250416
     * @vftbl  2
     * @symbol ?write@ItemUseOnActorInventoryTransaction@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1390320717
     * @vftbl  3
     * @symbol ?postLoadItems@ItemUseOnActorInventoryTransaction@@UEAAXAEAVBlockPalette@@_N@Z
     */
    virtual void postLoadItems(class BlockPalette &, bool);
    /**
     * @hash   -424968435
     * @vftbl  4
     * @symbol ?handle@ItemUseOnActorInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z
     */
    virtual enum InventoryTransactionError handle(class Player &, bool) const;
    /**
     * @hash   -1781872340
     * @vftbl  5
     * @symbol ?onTransactionError@ItemUseOnActorInventoryTransaction@@UEBAXAEAVPlayer@@W4InventoryTransactionError@@@Z
     */
    virtual void onTransactionError(class Player &, enum InventoryTransactionError) const;
    /**
     * @hash   -481587880
     * @symbol ?setSelectedItem@ItemUseOnActorInventoryTransaction@@QEAAAEAV1@AEBVItemStack@@@Z
     */
    MCAPI class ItemUseOnActorInventoryTransaction & setSelectedItem(class ItemStack const &);

};