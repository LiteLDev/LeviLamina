#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThreadDataInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThreadDataInterface() = default;

    // vIndex: 1
    virtual void* PerThreadFactory(void*) = 0;

    // vIndex: 2
    virtual void PerThreadDestructor(void*, void*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
