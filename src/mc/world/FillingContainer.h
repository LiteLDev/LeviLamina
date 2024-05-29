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
    // vIndex: 0, symbol: ??1FillingContainer@@UEAA@XZ
    virtual ~FillingContainer();

    // vIndex: 2, symbol: ?serverInitItemStackIds@FillingContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    virtual void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // vIndex: 5, symbol: ?getItem@FillingContainer@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getItem(int slot) const;

    // vIndex: 10, symbol: ?setItem@FillingContainer@@UEAAXHAEBVItemStack@@@Z
    virtual void setItem(int slot, class ItemStack const& item);

    // vIndex: 11, symbol: ?setItemWithForceBalance@FillingContainer@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setItemWithForceBalance(int slot, class ItemStack const& item, bool forceBalanced);

    // vIndex: 12, symbol: ?removeItem@FillingContainer@@UEAAXHH@Z
    virtual void removeItem(int slot, int count);

    // vIndex: 17, symbol: ?getContainerSize@FillingContainer@@UEBAHXZ
    virtual int getContainerSize() const;

    // vIndex: 18, symbol: ?getMaxStackSize@FillingContainer@@UEBAHXZ
    virtual int getMaxStackSize() const;

    // vIndex: 19, symbol: ?startOpen@FillingContainer@@UEAAXAEAVPlayer@@@Z
    virtual void startOpen(class Player&);

    // vIndex: 38, symbol: ?add@FillingContainer@@UEAA_NAEAVItemStack@@@Z
    virtual bool add(class ItemStack& item);

    // vIndex: 39, symbol: ?canAdd@FillingContainer@@UEBA_NAEBVItemStack@@@Z
    virtual bool canAdd(class ItemStack const& item) const;

    // vIndex: 40, symbol: ?clearSlot@FillingContainer@@UEAAXH@Z
    virtual void clearSlot(int slot);

    // vIndex: 41, symbol: ?clearInventory@FillingContainer@@UEAAHH@Z
    virtual int clearInventory(int resizeTo);

    // vIndex: 42, symbol: ?load@FillingContainer@@UEAAXAEBVListTag@@AEBVSemVersion@@AEAVLevel@@@Z
    virtual void load(class ListTag const& inventoryList, class SemVersion const& version, class Level& level);

    // symbol: ??0FillingContainer@@QEAA@PEAVPlayer@@HW4ContainerType@@@Z
    MCAPI FillingContainer(class Player* player, int numTotalSlots, ::ContainerType containerType);

    // symbol: ?getHotbarSize@FillingContainer@@QEBAHXZ
    MCAPI int getHotbarSize() const;

    // symbol: ?getSlotWithItem@FillingContainer@@QEBAHAEBVItemStack@@_N1@Z
    MCAPI int getSlotWithItem(class ItemStack const& item, bool checkAux, bool checkData) const;

    // symbol: ?hasResource@FillingContainer@@QEAA_NH@Z
    MCAPI bool hasResource(int type);

    // symbol: ??4FillingContainer@@QEAAAEAV0@AEBV0@@Z
    MCAPI class FillingContainer& operator=(class FillingContainer const&);

    // symbol: ?removeResource@FillingContainer@@QEAA_NH@Z
    MCAPI bool removeResource(int type);

    // symbol: ?removeResource@FillingContainer@@QEAAHAEBVItemStack@@_N1H@Z
    MCAPI int removeResource(class ItemStack const& item, bool requireExactAux, bool requireExactData, int maxCount);

    // symbol: ?save@FillingContainer@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class ListTag> save() const;

    // symbol: ?swapSlots@FillingContainer@@QEAAXHH@Z
    MCAPI void swapSlots(int from, int to);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_addResource@FillingContainer@@IEAAHAEBVItemStack@@@Z
    MCAPI int _addResource(class ItemStack const& item);

    // symbol: ?_doDrop@FillingContainer@@IEAAXAEAVItemStack@@_N@Z
    MCAPI void _doDrop(class ItemStack& item, bool randomly);

    // symbol: ?_fixBackwardCompabilityItem@FillingContainer@@IEAAXAEAVItemStack@@@Z
    MCAPI void _fixBackwardCompabilityItem(class ItemStack& item);

    // symbol: ?_getFreeSlot@FillingContainer@@IEBAHXZ
    MCAPI int _getFreeSlot() const;

    // symbol: ?_getSlot@FillingContainer@@IEBAHH@Z
    MCAPI int _getSlot(int blockId) const;

    // symbol: ?_getSlotWithRemainingSpace@FillingContainer@@IEBAHAEBVItemStack@@@Z
    MCAPI int _getSlotWithRemainingSpace(class ItemStack const& newItem) const;

    // symbol: ?_isCreative@FillingContainer@@IEBA_NXZ
    MCAPI bool _isCreative() const;

    // symbol: ?_release@FillingContainer@@IEAAXH@Z
    MCAPI void _release(int slot);

    // NOLINTEND
};
