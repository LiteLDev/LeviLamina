/**
 * @file  ItemUseInventoryTransaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~ItemUseInventoryTransaction();
    /**
     * @hash   -1866392134
     * @vftbl  1
     * @symbol ?read@ItemUseInventoryTransaction@@UEAAXAEAVReadOnlyBinaryStream@@@Z
     */
    virtual void read(class ReadOnlyBinaryStream &);
    /**
     * @hash   901791058
     * @vftbl  2
     * @symbol ?write@ItemUseInventoryTransaction@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1164624257
     * @vftbl  3
     * @symbol ?postLoadItems@ItemUseInventoryTransaction@@UEAAXAEAVBlockPalette@@_N@Z
     */
    virtual void postLoadItems(class BlockPalette &, bool);
    /**
     * @hash   -273930309
     * @vftbl  4
     * @symbol ?handle@ItemUseInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z
     */
    virtual enum InventoryTransactionError handle(class Player &, bool) const;
    /**
     * @hash   -1405817430
     * @vftbl  5
     * @symbol ?onTransactionError@ItemUseInventoryTransaction@@UEBAXAEAVPlayer@@W4InventoryTransactionError@@@Z
     */
    virtual void onTransactionError(class Player &, enum InventoryTransactionError) const;
    /**
     * @hash   -1883557583
     * @symbol ??0ItemUseInventoryTransaction@@QEAA@AEBV0@@Z
     */
    MCAPI ItemUseInventoryTransaction(class ItemUseInventoryTransaction const &);
    /**
     * @hash   1791155964
     * @symbol ??4ItemUseInventoryTransaction@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ItemUseInventoryTransaction & operator=(class ItemUseInventoryTransaction const &);
    /**
     * @hash   1753126085
     * @symbol ?resendBlocksAroundArea@ItemUseInventoryTransaction@@QEBAXAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    MCAPI void resendBlocksAroundArea(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -1806120348
     * @symbol ?resendPlayerState@ItemUseInventoryTransaction@@QEBAXAEAVPlayer@@@Z
     */
    MCAPI void resendPlayerState(class Player &) const;
    /**
     * @hash   353651536
     * @symbol ?setSelectedItem@ItemUseInventoryTransaction@@QEAAAEAV1@AEBVItemStack@@@Z
     */
    MCAPI class ItemUseInventoryTransaction & setSelectedItem(class ItemStack const &);

//private:

private:
    /**
     * @hash   289404509
     * @symbol ?actionTypeMap@ItemUseInventoryTransaction@@0V?$BidirectionalUnorderedMap@W4ActionType@ItemUseInventoryTransaction@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum ItemUseInventoryTransaction::ActionType, std::string> const actionTypeMap;

};