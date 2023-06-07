/**
 * @file  Inventory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?init\@Inventory\@\@UEAAXXZ
     */
    virtual void init();
    /**
     * @vftbl 10
     * @symbol ?setItem\@Inventory\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @vftbl 11
     * @symbol ?setItemWithForceBalance\@Inventory\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @vftbl 22
     * @symbol ?getEmptySlotsCount\@Inventory\@\@UEBAHXZ
     */
    virtual int getEmptySlotsCount() const;
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl 26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26();
    /**
     * @vftbl 36
     * @symbol ?add\@Inventory\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool add(class ItemStack &);
    /**
     * @vftbl 37
     * @symbol ?canAdd\@Inventory\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool canAdd(class ItemStack const &) const;
    /**
     * @vftbl 41
     * @symbol ?getFirstEmptySlot\@Inventory\@\@UEBAHXZ
     */
    virtual int getFirstEmptySlot() const;
    /**
     * @vftbl 42
     * @symbol ?setContainerSize\@Inventory\@\@UEAAXH\@Z
     */
    virtual void setContainerSize(int);
    /**
     * @symbol ?dropSlot\@Inventory\@\@QEAAXH_N00\@Z
     */
    MCAPI void dropSlot(int, bool, bool, bool);
    /**
     * @symbol ?setupDefault\@Inventory\@\@QEAAXXZ
     */
    MCAPI void setupDefault();
    /**
     * @symbol ?tick\@Inventory\@\@QEAAXH\@Z
     */
    MCAPI void tick(int);

};
