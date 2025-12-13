#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerContentChangeListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void containerContentChanged(int) = 0;

    virtual ~ContainerContentChangeListener();
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
