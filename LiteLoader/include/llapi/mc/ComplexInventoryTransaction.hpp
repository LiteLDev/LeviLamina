/**
 * @file  ComplexInventoryTransaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "InventoryTransaction.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class ComplexInventoryTransaction.
 *
 */
class ComplexInventoryTransaction {

#define AFTER_EXTRA
// Add Member There
public:
enum class Type : unsigned
{
    NORMAL = 0,
    MISMATCH = 1,
    ITEM_USE = 2,
    ITEM_USE_ON_ACTOR = 3,
    RELEASE_ITEM = 4,
} type;
InventoryTransaction data;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPLEXINVENTORYTRANSACTION
public:
    class ComplexInventoryTransaction& operator=(class ComplexInventoryTransaction const &) = delete;
    ComplexInventoryTransaction(class ComplexInventoryTransaction const &) = delete;
    ComplexInventoryTransaction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ComplexInventoryTransaction();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   1889162565
     * @vftbl  3
     * @symbol ?postLoadItems@ComplexInventoryTransaction@@UEAAXAEAVBlockPalette@@_N@Z
     */
    virtual void postLoadItems(class BlockPalette &, bool);
    /**
     * @hash   -179832225
     * @vftbl  4
     * @symbol ?handle@ComplexInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z
     */
    virtual enum InventoryTransactionError handle(class Player &, bool) const;
    /**
     * @hash   -1532232962
     * @vftbl  5
     * @symbol ?onTransactionError@ComplexInventoryTransaction@@UEBAXAEAVPlayer@@W4InventoryTransactionError@@@Z
     */
    virtual void onTransactionError(class Player &, enum InventoryTransactionError) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPLEXINVENTORYTRANSACTION
    /**
     * @hash   777937702
     * @symbol ?read@ComplexInventoryTransaction@@UEAAXAEAVReadOnlyBinaryStream@@@Z
     */
    MCVAPI void read(class ReadOnlyBinaryStream &);
    /**
     * @hash   665936670
     * @symbol ?write@ComplexInventoryTransaction@@UEBAXAEAVBinaryStream@@@Z
     */
    MCVAPI void write(class BinaryStream &) const;
#endif
    /**
     * @hash   663422464
     * @symbol ??0ComplexInventoryTransaction@@QEAA@W4Type@0@AEBVInventoryTransaction@@@Z
     */
    MCAPI ComplexInventoryTransaction(enum ComplexInventoryTransaction::Type, class InventoryTransaction const &);
    /**
     * @hash   -1507604037
     * @symbol ??0ComplexInventoryTransaction@@QEAA@W4Type@0@@Z
     */
    MCAPI ComplexInventoryTransaction(enum ComplexInventoryTransaction::Type);
    /**
     * @hash   2059139744
     * @symbol ?fromType@ComplexInventoryTransaction@@SA?AV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@W4Type@1@@Z
     */
    MCAPI static std::unique_ptr<class ComplexInventoryTransaction> fromType(enum ComplexInventoryTransaction::Type);
    /**
     * @hash   166981447
     * @symbol ?fromType@ComplexInventoryTransaction@@SA?AV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@W4Type@1@AEBVInventoryTransaction@@@Z
     */
    MCAPI static std::unique_ptr<class ComplexInventoryTransaction> fromType(enum ComplexInventoryTransaction::Type, class InventoryTransaction const &);
    /**
     * @hash   403629678
     * @symbol ?getTransactionTypeName@ComplexInventoryTransaction@@SA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Type@1@@Z
     */
    MCAPI static std::string const getTransactionTypeName(enum ComplexInventoryTransaction::Type);

//protected:
    /**
     * @symbol ?_checkTransactionItemsMatch@ComplexInventoryTransaction@@IEBA_NAEBVPlayer@@AEAVItemStackBase@@H@Z
     */
    MCAPI bool _checkTransactionItemsMatch(class Player const &, class ItemStackBase &, int) const;

//private:

protected:

private:
    /**
     * @hash   -959289889
     * @symbol ?transactionTypeMap@ComplexInventoryTransaction@@0V?$BidirectionalUnorderedMap@W4Type@ComplexInventoryTransaction@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum ComplexInventoryTransaction::Type, std::string> const transactionTypeMap;

};