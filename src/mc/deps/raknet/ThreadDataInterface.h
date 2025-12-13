#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThreadDataInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThreadDataInterface() = default;

    virtual void* PerThreadFactory(void*) = 0;

    virtual void PerThreadDestructor(void*, void*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
