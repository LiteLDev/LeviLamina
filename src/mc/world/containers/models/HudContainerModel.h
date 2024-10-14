#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"

class HudContainerModel : public ::ContainerModel {
public:
    // prevent constructor by default
    HudContainerModel& operator=(HudContainerModel const&);
    HudContainerModel(HudContainerModel const&);
    HudContainerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void containerContentChanged(int slot);

    // vIndex: 1
    virtual ~HudContainerModel() = default;

    // vIndex: 7
    virtual class ContainerWeakRef getContainerWeakRef() const;

    // vIndex: 14
    virtual bool isValid();

    // vIndex: 21
    virtual class Container* _getContainer() const;

    // vIndex: 23
    virtual void _init();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _refreshContainer();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI class Container* _getContainer$() const;

    MCAPI void _init$();

    MCAPI void containerContentChanged$(int slot);

    MCAPI class ContainerWeakRef getContainerWeakRef$() const;

    MCAPI bool isValid$();

    // NOLINTEND
};
