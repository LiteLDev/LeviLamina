#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"

class FillingContainer : public ::Container {

public:
    // prevent constructor by default
    FillingContainer(FillingContainer const&) = delete;
    FillingContainer()                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?serverInitItemStackIds\@FillingContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getItem\@FillingContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?setItem\@FillingContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?setItemWithForceBalance\@FillingContainer\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const&, bool); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?removeItem\@FillingContainer\@\@UEAAXHH\@Z
     */
    virtual void removeItem(int, int); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?getContainerSize\@FillingContainer\@\@UEBAHXZ
     */
    virtual int getContainerSize() const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?getMaxStackSize\@FillingContainer\@\@UEBAHXZ
     */
    virtual int getMaxStackSize() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?startOpen\@FillingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player&); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?stopOpen\@FillingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player&); // NOLINT
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25(); // NOLINT
    /**
     * @vftbl 26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26(); // NOLINT
    /**
     * @vftbl 36
     * @symbol ?add\@FillingContainer\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool add(class ItemStack&); // NOLINT
    /**
     * @vftbl 37
     * @symbol ?canAdd\@FillingContainer\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool canAdd(class ItemStack const&) const; // NOLINT
    /**
     * @vftbl 38
     * @symbol ?clearSlot\@FillingContainer\@\@UEAAXH\@Z
     */
    virtual void clearSlot(int); // NOLINT
    /**
     * @vftbl 39
     * @symbol ?clearInventory\@FillingContainer\@\@UEAAHH\@Z
     */
    virtual int clearInventory(int); // NOLINT
    /**
     * @vftbl 40
     * @symbol ?load\@FillingContainer\@\@UEAAXAEBVListTag\@\@AEBVSemVersion\@\@AEAVLevel\@\@\@Z
     */
    virtual void load(class ListTag const&, class SemVersion const&, class Level&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILLINGCONTAINER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FillingContainer(); // NOLINT
#endif
    /**
     * @symbol ??0FillingContainer\@\@QEAA\@PEAVPlayer\@\@HW4ContainerType\@\@\@Z
     */
    MCAPI FillingContainer(class Player*, int, enum class ContainerType); // NOLINT
    /**
     * @symbol ?getHotbarSize\@FillingContainer\@\@QEBAHXZ
     */
    MCAPI int getHotbarSize() const; // NOLINT
    /**
     * @symbol ?getSlotWithItem\@FillingContainer\@\@QEBAHAEBVItemStack\@\@_N1\@Z
     */
    MCAPI int getSlotWithItem(class ItemStack const&, bool, bool) const; // NOLINT
    /**
     * @symbol ?hasResource\@FillingContainer\@\@QEAA_NH\@Z
     */
    MCAPI bool hasResource(int); // NOLINT
    /**
     * @symbol ??4FillingContainer\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class FillingContainer& operator=(class FillingContainer const&); // NOLINT
    /**
     * @symbol ?removeResource\@FillingContainer\@\@QEAAHAEBVItemStack\@\@_N1H\@Z
     */
    MCAPI int removeResource(class ItemStack const&, bool, bool, int); // NOLINT
    /**
     * @symbol ?removeResource\@FillingContainer\@\@QEAA_NH\@Z
     */
    MCAPI bool removeResource(int); // NOLINT
    /**
     * @symbol
     * ?save\@FillingContainer\@\@QEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> save() const; // NOLINT
    /**
     * @symbol ?swapSlots\@FillingContainer\@\@QEAAXHH\@Z
     */
    MCAPI void swapSlots(int, int); // NOLINT

    // protected:
    /**
     * @symbol ?_addResource\@FillingContainer\@\@IEAAHAEBVItemStack\@\@\@Z
     */
    MCAPI int _addResource(class ItemStack const&); // NOLINT
    /**
     * @symbol ?_doDrop\@FillingContainer\@\@IEAAXAEAVItemStack\@\@_N\@Z
     */
    MCAPI void _doDrop(class ItemStack&, bool); // NOLINT
    /**
     * @symbol ?_fixBackwardCompabilityItem\@FillingContainer\@\@IEAAXAEAVItemStack\@\@\@Z
     */
    MCAPI void _fixBackwardCompabilityItem(class ItemStack&); // NOLINT
    /**
     * @symbol ?_getFreeSlot\@FillingContainer\@\@IEBAHXZ
     */
    MCAPI int _getFreeSlot() const; // NOLINT
    /**
     * @symbol ?_getSlot\@FillingContainer\@\@IEBAHH\@Z
     */
    MCAPI int _getSlot(int) const; // NOLINT
    /**
     * @symbol ?_getSlotWithRemainingSpace\@FillingContainer\@\@IEBAHAEBVItemStack\@\@\@Z
     */
    MCAPI int _getSlotWithRemainingSpace(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?_isCreative\@FillingContainer\@\@IEBA_NXZ
     */
    MCAPI bool _isCreative() const; // NOLINT
    /**
     * @symbol ?_release\@FillingContainer\@\@IEAAXH\@Z
     */
    MCAPI void _release(int); // NOLINT

protected:
};
