#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/containers/ContainerType.h"

class FillingContainer : public ::Container {
public:
    // prevent constructor by default
    FillingContainer(FillingContainer const&);
    FillingContainer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?serverInitItemStackIds@FillingContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    virtual void serverInitItemStackIds(int, int, std::function<void(int, class ItemStack const&)>);

    // vIndex: 5, symbol: ?getItem@FillingContainer@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getItem(int) const;

    // vIndex: 10, symbol: ?setItem@FillingContainer@@UEAAXHAEBVItemStack@@@Z
    virtual void setItem(int, class ItemStack const&);

    // vIndex: 11, symbol: ?setItemWithForceBalance@FillingContainer@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setItemWithForceBalance(int, class ItemStack const&, bool);

    // vIndex: 12, symbol: ?removeItem@FillingContainer@@UEAAXHH@Z
    virtual void removeItem(int, int);

    // vIndex: 16, symbol: ?getContainerSize@FillingContainer@@UEBAHXZ
    virtual int getContainerSize() const;

    // vIndex: 17, symbol: ?getMaxStackSize@FillingContainer@@UEBAHXZ
    virtual int getMaxStackSize() const;

    // vIndex: 18, symbol: ?startOpen@FillingContainer@@UEAAXAEAVPlayer@@@Z
    virtual void startOpen(class Player&);

    // vIndex: 19, symbol: ?stopOpen@FillingContainer@@UEAAXAEAVPlayer@@@Z
    virtual void stopOpen(class Player&);

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol: __unk_vfn_26
    virtual void __unk_vfn_26();

    // vIndex: 36, symbol: ?add@FillingContainer@@UEAA_NAEAVItemStack@@@Z
    virtual bool add(class ItemStack&);

    // vIndex: 37, symbol: ?canAdd@FillingContainer@@UEBA_NAEBVItemStack@@@Z
    virtual bool canAdd(class ItemStack const&) const;

    // vIndex: 38, symbol: ?clearSlot@FillingContainer@@UEAAXH@Z
    virtual void clearSlot(int);

    // vIndex: 39, symbol: ?clearInventory@FillingContainer@@UEAAHH@Z
    virtual int clearInventory(int);

    // vIndex: 40, symbol: ?load@FillingContainer@@UEAAXAEBVListTag@@AEBVSemVersion@@AEAVLevel@@@Z
    virtual void load(class ListTag const&, class SemVersion const&, class Level&);

    // symbol: ??1FillingContainer@@UEAA@XZ
    MCVAPI ~FillingContainer();

    // symbol: ??0FillingContainer@@QEAA@PEAVPlayer@@HW4ContainerType@@@Z
    MCAPI FillingContainer(class Player*, int, ::ContainerType);

    // symbol: ?getHotbarSize@FillingContainer@@QEBAHXZ
    MCAPI int getHotbarSize() const;

    // symbol: ?getSlotWithItem@FillingContainer@@QEBAHAEBVItemStack@@_N1@Z
    MCAPI int getSlotWithItem(class ItemStack const&, bool, bool) const;

    // symbol: ?hasResource@FillingContainer@@QEAA_NH@Z
    MCAPI bool hasResource(int);

    // symbol: ??4FillingContainer@@QEAAAEAV0@AEBV0@@Z
    MCAPI class FillingContainer& operator=(class FillingContainer const&);

    // symbol: ?removeResource@FillingContainer@@QEAAHAEBVItemStack@@_N1H@Z
    MCAPI int removeResource(class ItemStack const&, bool, bool, int);

    // symbol: ?removeResource@FillingContainer@@QEAA_NH@Z
    MCAPI bool removeResource(int);

    // symbol: ?save@FillingContainer@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class ListTag> save() const;

    // symbol: ?swapSlots@FillingContainer@@QEAAXHH@Z
    MCAPI void swapSlots(int, int);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_addResource@FillingContainer@@IEAAHAEBVItemStack@@@Z
    MCAPI int _addResource(class ItemStack const&);

    // symbol: ?_doDrop@FillingContainer@@IEAAXAEAVItemStack@@_N@Z
    MCAPI void _doDrop(class ItemStack&, bool);

    // symbol: ?_fixBackwardCompabilityItem@FillingContainer@@IEAAXAEAVItemStack@@@Z
    MCAPI void _fixBackwardCompabilityItem(class ItemStack&);

    // symbol: ?_getFreeSlot@FillingContainer@@IEBAHXZ
    MCAPI int _getFreeSlot() const;

    // symbol: ?_getSlot@FillingContainer@@IEBAHH@Z
    MCAPI int _getSlot(int) const;

    // symbol: ?_getSlotWithRemainingSpace@FillingContainer@@IEBAHAEBVItemStack@@@Z
    MCAPI int _getSlotWithRemainingSpace(class ItemStack const&) const;

    // symbol: ?_isCreative@FillingContainer@@IEBA_NXZ
    MCAPI bool _isCreative() const;

    // symbol: ?_release@FillingContainer@@IEAAXH@Z
    MCAPI void _release(int);

    // NOLINTEND
};
