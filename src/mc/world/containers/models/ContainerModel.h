#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/containers/ContainerCategory.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/ContainerExpandStatus.h"

class ContainerModel : public ::ContainerContentChangeListener {
public:
    // prevent constructor by default
    ContainerModel& operator=(ContainerModel const&);
    ContainerModel(ContainerModel const&);
    ContainerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?containerContentChanged@ContainerModel@@UEAAXH@Z
    virtual void containerContentChanged(int);

    // vIndex: 1, symbol: ??1ContainerModel@@UEAA@XZ
    virtual ~ContainerModel();

    // vIndex: 2, symbol: ?postInit@ContainerModel@@UEAAXXZ
    virtual void postInit();

    // vIndex: 3, symbol: ?releaseResources@ContainerModel@@UEAAXXZ
    virtual void releaseResources();

    // vIndex: 4, symbol: ?getContainerSize@ContainerModel@@UEBAHXZ
    virtual int getContainerSize() const;

    // vIndex: 5, symbol: ?getFilteredContainerSize@ContainerModel@@UEBAHXZ
    virtual int getFilteredContainerSize() const;

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: ?getContainerWeakRef@ContainerModel@@UEBA?AVContainerWeakRef@@XZ
    virtual class ContainerWeakRef getContainerWeakRef() const;

    // vIndex: 8, symbol: ?getItemStack@ContainerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getItemStack(int) const;

    // vIndex: 9, symbol: ?getItems@ContainerModel@@UEBAAEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> const& getItems() const;

    // vIndex: 10, symbol: ?getItemInstance@ContainerModel@@UEBAAEBVItemInstance@@H@Z
    virtual class ItemInstance const& getItemInstance(int) const;

    // vIndex: 11, symbol: ?getItemStackBase@ContainerModel@@UEBAAEBVItemStackBase@@H@Z
    virtual class ItemStackBase const& getItemStackBase(int) const;

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: ?setItem@ContainerModel@@UEAAXHAEBVItemStack@@@Z
    virtual void setItem(int, class ItemStack const&);

    // vIndex: 14, symbol: ?isValid@ContainerModel@@UEAA_NXZ
    virtual bool isValid();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 17, symbol: ?getItemExpandStatus@ContainerModel@@UEBA?AW4ContainerExpandStatus@@H@Z
    virtual ::ContainerExpandStatus getItemExpandStatus(int) const;

    // vIndex: 18, symbol:
    // ?getItemGroupName@ContainerModel@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual std::string const& getItemGroupName(int) const;

    // vIndex: 19, symbol: __unk_vfn_19
    virtual void __unk_vfn_19();

    // vIndex: 20, symbol: ?isSlotDisabled@ContainerModel@@UEBA_NH@Z
    virtual bool isSlotDisabled(int) const;

    // vIndex: 21, symbol: ?_getContainer@ContainerModel@@MEBAPEAVContainer@@XZ
    virtual class Container* _getContainer() const;

    // vIndex: 22, symbol: ?_getContainerOffset@ContainerModel@@MEBAHXZ
    virtual int _getContainerOffset() const;

    // vIndex: 23, symbol: ?_init@ContainerModel@@MEAAXXZ
    virtual void _init();

    // vIndex: 24, symbol: ?_onItemChanged@ContainerModel@@MEAAXHAEBVItemStack@@0@Z
    virtual void _onItemChanged(int, class ItemStack const&, class ItemStack const&);

    // symbol: ?isExpanableItemFiltered@ContainerModel@@UEBA_NH@Z
    MCVAPI bool isExpanableItemFiltered(int) const;

    // symbol: ?isItemFiltered@ContainerModel@@UEBA_NAEBVItemStackBase@@@Z
    MCVAPI bool isItemFiltered(class ItemStackBase const&) const;

    // symbol: ?isItemInstanceBased@ContainerModel@@UEBA_NXZ
    MCVAPI bool isItemInstanceBased() const;

    // symbol: ?switchItemExpando@ContainerModel@@UEAAXH@Z
    MCVAPI void switchItemExpando(int);

    // symbol: ?tick@ContainerModel@@UEAAXH@Z
    MCVAPI void tick(int);

    // symbol: ??0ContainerModel@@QEAA@W4ContainerEnumName@@HW4ContainerCategory@@_N@Z
    MCAPI ContainerModel(::ContainerEnumName, int, ::ContainerCategory, bool);

    // symbol: ?getContainerEnumName@ContainerModel@@QEBA?AW4ContainerEnumName@@XZ
    MCAPI ::ContainerEnumName getContainerEnumName() const;

    // symbol:
    // ?getContainerStringName@ContainerModel@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getContainerStringName() const;

    // symbol: ?initContainerRuntimeId@ContainerModel@@QEAAXXZ
    MCAPI void initContainerRuntimeId();

    // symbol: ?isContainerSlotInRange@ContainerModel@@QEBA_NH@Z
    MCAPI bool isContainerSlotInRange(int) const;

    // symbol: ?networkUpdateItem@ContainerModel@@QEAAXHAEBVItemStack@@0@Z
    MCAPI void networkUpdateItem(int, class ItemStack const&, class ItemStack const&);

    // symbol: ?registerOnContainerChangedCallback@ContainerModel@@QEAAXV?$function@$$A6AXHAEBVItemStack@@0@Z@std@@@Z
    MCAPI void
        registerOnContainerChangedCallback(std::function<void(int, class ItemStack const&, class ItemStack const&)>);

    // symbol: ?registerPlayerNotificationCallback@ContainerModel@@QEAAXV?$function@$$A6AXHAEBVItemStack@@0@Z@std@@@Z
    MCAPI void
        registerPlayerNotificationCallback(std::function<void(int, class ItemStack const&, class ItemStack const&)>);

    // symbol: ?serverInitItemStackIds@ContainerModel@@QEAAXXZ
    MCAPI void serverInitItemStackIds();

    // symbol: ?setClientUIContainer@ContainerModel@@QEAAXPEAVSparseContainerClient@@@Z
    MCAPI void setClientUIContainer(class SparseContainerClient*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onClientUIItemNetworkChanged@ContainerModel@@AEAAXHAEBVItemStack@@0@Z
    MCAPI void _onClientUIItemNetworkChanged(int, class ItemStack const&, class ItemStack const&);

    // NOLINTEND
};
