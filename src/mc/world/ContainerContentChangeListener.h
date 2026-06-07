#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerContentChangeListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void containerContentChanged(int iSlot) = 0;

    virtual ~ContainerContentChangeListener() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
