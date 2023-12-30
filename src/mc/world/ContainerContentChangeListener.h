#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerContentChangeListener {
public:
    // prevent constructor by default
    ContainerContentChangeListener& operator=(ContainerContentChangeListener const&);
    ContainerContentChangeListener(ContainerContentChangeListener const&);
    ContainerContentChangeListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?containerContentChanged@ContainerModel@@UEAAXH@Z
    virtual void containerContentChanged(int slot) = 0;

    // vIndex: 1, symbol: ??1ContainerContentChangeListener@@UEAA@XZ
    virtual ~ContainerContentChangeListener();

    // NOLINTEND
};
