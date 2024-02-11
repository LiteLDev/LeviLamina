#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"

class HudContainerModel : public ::ContainerModel {
public:
    // prevent constructor by default
    HudContainerModel& operator=(HudContainerModel const&);
    HudContainerModel(HudContainerModel const&);
    HudContainerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?containerContentChanged@HudContainerModel@@UEAAXH@Z
    virtual void containerContentChanged(int slot);

    // vIndex: 1, symbol: __gen_??1HudContainerModel@@UEAA@XZ
    virtual ~HudContainerModel() = default;

    // vIndex: 7, symbol: ?getContainerWeakRef@HudContainerModel@@UEBA?AVContainerWeakRef@@XZ
    virtual class ContainerWeakRef getContainerWeakRef() const;

    // vIndex: 14, symbol: ?isValid@HudContainerModel@@UEAA_NXZ
    virtual bool isValid();

    // vIndex: 21, symbol: ?_getContainer@HudContainerModel@@EEBAPEAVContainer@@XZ
    virtual class Container* _getContainer() const;

    // vIndex: 23, symbol: ?_init@HudContainerModel@@EEAAXXZ
    virtual void _init();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_refreshContainer@HudContainerModel@@AEAAXXZ
    MCAPI void _refreshContainer();

    // NOLINTEND
};
