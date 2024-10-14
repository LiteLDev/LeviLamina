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
    // vIndex: 0
    virtual void containerContentChanged(int slot) = 0;

    // vIndex: 1
    virtual ~ContainerContentChangeListener();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
