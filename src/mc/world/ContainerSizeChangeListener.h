#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerSizeChangeListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void containerSizeChanged(int) = 0;

    virtual ~ContainerSizeChangeListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
