#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerRemovedListener {
public:
    // prevent constructor by default
    ContainerRemovedListener& operator=(ContainerRemovedListener const&);
    ContainerRemovedListener(ContainerRemovedListener const&);
    ContainerRemovedListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1
    virtual ~ContainerRemovedListener() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
