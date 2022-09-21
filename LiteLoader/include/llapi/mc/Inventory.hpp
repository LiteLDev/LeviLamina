/**
 * @file  MC/Inventory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FillingContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Inventory.
 *
 */
class Inventory : public FillingContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORY
public:
    class Inventory& operator=(class Inventory const &) = delete;
    Inventory(class Inventory const &) = delete;
    Inventory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~Inventory();
    /**
     * @hash   67627035
     * @vftbl  1
     * @symbol ?init@Inventory@@UEAAXXZ
     */
    virtual void init();
    /**
     * @hash   1234849525
     * @vftbl  9
     * @symbol ?setItem@Inventory@@UEAAXHAEBVItemStack@@@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @hash   -1669771712
     * @vftbl  10
     * @symbol ?setItemWithForceBalance@Inventory@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @vftbl  22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @symbol __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @hash   -1203176231
     * @vftbl  33
     * @symbol ?add@Inventory@@UEAA_NAEAVItemStack@@@Z
     */
    virtual bool add(class ItemStack &);
    /**
     * @hash   -1285415595
     * @vftbl  34
     * @symbol ?canAdd@Inventory@@UEBA_NAEBVItemStack@@@Z
     */
    virtual bool canAdd(class ItemStack const &) const;
    /**
     * @hash   -1369345984
     * @vftbl  38
     * @symbol ?getEmptySlotsCount@Inventory@@UEBAHXZ
     */
    virtual int getEmptySlotsCount() const;
    /**
     * @hash   -926995856
     * @vftbl  39
     * @symbol ?getFirstEmptySlot@Inventory@@UEBAHXZ
     */
    virtual int getFirstEmptySlot() const;
    /**
     * @hash   -946502796
     * @vftbl  40
     * @symbol ?setContainerSize@Inventory@@UEAAXH@Z
     */
    virtual void setContainerSize(int);
    /**
     * @hash   -1455203928
     * @symbol ??0Inventory@@QEAA@PEAVPlayer@@@Z
     */
    MCAPI Inventory(class Player *);
    /**
     * @hash   1455655243
     * @symbol ?dropSlot@Inventory@@QEAAXH_N00@Z
     */
    MCAPI void dropSlot(int, bool, bool, bool);
    /**
     * @hash   -1545412444
     * @symbol ?getComplexItems@Inventory@@QEAA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    MCAPI std::vector<class ItemStack> getComplexItems();
    /**
     * @hash   1820683467
     * @symbol ?setupDefault@Inventory@@QEAAXXZ
     */
    MCAPI void setupDefault();
    /**
     * @hash   1807035630
     * @symbol ?tick@Inventory@@QEAAXH@Z
     */
    MCAPI void tick(int);

};