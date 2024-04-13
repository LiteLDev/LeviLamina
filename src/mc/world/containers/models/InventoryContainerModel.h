#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"

class InventoryContainerModel : public ::ContainerModel {
public:
    // prevent constructor by default
    InventoryContainerModel& operator=(InventoryContainerModel const&);
    InventoryContainerModel(InventoryContainerModel const&);
    InventoryContainerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?containerContentChanged@InventoryContainerModel@@UEAAXH@Z
    virtual void containerContentChanged(int slot);

    // vIndex: 1, symbol: __gen_??1InventoryContainerModel@@UEAA@XZ
    virtual ~InventoryContainerModel() = default;

    // vIndex: 2, symbol: ?postInit@InventoryContainerModel@@UEAAXXZ
    virtual void postInit();

    // vIndex: 3, symbol: ?releaseResources@InventoryContainerModel@@UEAAXXZ
    virtual void releaseResources();

    // vIndex: 7, symbol: ?getContainerWeakRef@InventoryContainerModel@@UEBA?AVContainerWeakRef@@XZ
    virtual class ContainerWeakRef getContainerWeakRef() const;

    // vIndex: 14, symbol: ?isValid@InventoryContainerModel@@UEAA_NXZ
    virtual bool isValid();

    // vIndex: 21, symbol: ?_getContainer@InventoryContainerModel@@EEBAPEAVContainer@@XZ
    virtual class Container* _getContainer() const;

    // vIndex: 22, symbol: ?_getContainerOffset@InventoryContainerModel@@MEBAHXZ
    virtual int _getContainerOffset() const;

    // vIndex: 24, symbol: ?_onItemChanged@InventoryContainerModel@@EEAAXHAEBVItemStack@@0@Z
    virtual void _onItemChanged(int modelSlot, class ItemStack const& oldItem, class ItemStack const& newItem);

    // symbol: ??0InventoryContainerModel@@QEAA@W4ContainerEnumName@@HAEAVPlayer@@@Z
    MCAPI InventoryContainerModel(::ContainerEnumName containerName, int size, class Player& player);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_refreshSlot@InventoryContainerModel@@AEAAXH@Z
    MCAPI void _refreshSlot(int modelSlot);

    // NOLINTEND
};
