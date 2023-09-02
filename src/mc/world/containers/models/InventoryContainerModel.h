#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"

class InventoryContainerModel : public ::ContainerModel {
public:
    // prevent constructor by default
    InventoryContainerModel& operator=(InventoryContainerModel const&) = delete;
    InventoryContainerModel(InventoryContainerModel const&)            = delete;
    InventoryContainerModel()                                          = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?containerContentChanged@InventoryContainerModel@@UEAAXH@Z
    virtual void containerContentChanged(int);

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?postInit@InventoryContainerModel@@UEAAXXZ
    virtual void postInit();

    // vIndex: 3, symbol: ?releaseResources@InventoryContainerModel@@UEAAXXZ
    virtual void releaseResources();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: ?getContainerWeakRef@InventoryContainerModel@@UEBA?AVContainerWeakRef@@XZ
    virtual class ContainerWeakRef getContainerWeakRef() const;

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 14, symbol: ?isValid@InventoryContainerModel@@UEAA_NXZ
    virtual bool isValid();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 19, symbol: __unk_vfn_19
    virtual void __unk_vfn_19();

    // vIndex: 20, symbol: ?_getContainer@InventoryContainerModel@@EEBAPEAVContainer@@XZ
    virtual class Container* _getContainer() const;

    // vIndex: 21, symbol: ?_getContainerOffset@InventoryContainerModel@@MEBAHXZ
    virtual int _getContainerOffset() const;

    // vIndex: 22, symbol: ?_onItemChanged@InventoryContainerModel@@EEAAXHAEBVItemStack@@0@Z
    virtual void _onItemChanged(int, class ItemStack const&, class ItemStack const&);

    // symbol: ??0InventoryContainerModel@@QEAA@W4ContainerEnumName@@HAEAVPlayer@@@Z
    MCAPI InventoryContainerModel(::ContainerEnumName, int, class Player&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_refreshSlot@InventoryContainerModel@@AEAAXH@Z
    MCAPI void _refreshSlot(int);

    // NOLINTEND
};
