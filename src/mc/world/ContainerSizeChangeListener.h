#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerSizeChangeListener {
public:
    // prevent constructor by default
    ContainerSizeChangeListener& operator=(ContainerSizeChangeListener const&);
    ContainerSizeChangeListener(ContainerSizeChangeListener const&);
    ContainerSizeChangeListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1
    virtual ~ContainerSizeChangeListener();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
