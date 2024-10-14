#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"

class PlayerUIContainerModelBase : public ::ContainerModel {
public:
    // prevent constructor by default
    PlayerUIContainerModelBase& operator=(PlayerUIContainerModelBase const&);
    PlayerUIContainerModelBase(PlayerUIContainerModelBase const&);
    PlayerUIContainerModelBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void containerContentChanged(int slot);

    // vIndex: 1
    virtual ~PlayerUIContainerModelBase() = default;

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

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _refreshContainer(bool initial);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI class Container* _getContainer$() const;

    MCAPI int _getContainerOffset$() const;

    MCAPI void _onItemChanged$(int modelSlot, class ItemStack const& oldItem, class ItemStack const& newItem);

    MCAPI void containerContentChanged$(int slot);

    MCAPI class ContainerWeakRef getContainerWeakRef$() const;

    MCAPI bool isValid$();

    MCAPI void postInit$();

    MCAPI void releaseResources$();

    // NOLINTEND
};
