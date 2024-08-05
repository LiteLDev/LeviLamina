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
    // vIndex: 0
    virtual void containerContentChanged(int slot);

    // vIndex: 1
    virtual ~InventoryContainerModel() = default;

    // vIndex: 2
    virtual void postInit();

    // vIndex: 3
    virtual void releaseResources();

    // vIndex: 7
    virtual class ContainerWeakRef getContainerWeakRef() const;

    // vIndex: 14
    virtual bool isValid();

    // vIndex: 21
    virtual class Container* _getContainer() const;

    // vIndex: 22
    virtual int _getContainerOffset() const;

    // vIndex: 24
    virtual void _onItemChanged(int modelSlot, class ItemStack const& oldItem, class ItemStack const& newItem);

    MCAPI InventoryContainerModel(::ContainerEnumName containerName, int size, class Player& player);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _refreshSlot(int modelSlot);

    // NOLINTEND
};
