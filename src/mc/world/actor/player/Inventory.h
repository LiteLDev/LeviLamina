#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/FillingContainer.h"

class Inventory : public ::FillingContainer {

public:
    // prevent constructor by default
    Inventory& operator=(Inventory const&) = delete;
    Inventory(Inventory const&)            = delete;
    Inventory()                            = delete;

public:
    // NOLINTBEGIN
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
    virtual void setItem(int, class ItemStack const&);
    /**
     * @vftbl 11
     * @symbol ?setItemWithForceBalance\@Inventory\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const&, bool);
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
    virtual bool add(class ItemStack&);
    /**
     * @vftbl 37
     * @symbol ?canAdd\@Inventory\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool canAdd(class ItemStack const&) const;
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
    // NOLINTEND
};
