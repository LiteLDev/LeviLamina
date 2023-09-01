#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerContentChangeListener {
public:
    // prevent constructor by default
    ContainerContentChangeListener& operator=(ContainerContentChangeListener const&) = delete;
    ContainerContentChangeListener(ContainerContentChangeListener const&)            = delete;
    ContainerContentChangeListener()                                                 = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?containerContentChanged@InventoryContainerModel@@UEAAXH@Z
    virtual void containerContentChanged(int) = 0;

    // symbol: ??1ContainerContentChangeListener@@UEAA@XZ
    MCVAPI ~ContainerContentChangeListener();

    // NOLINTEND
};
