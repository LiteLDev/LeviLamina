#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITickDeltaTimeManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITickDeltaTimeManagerProxy() = default;

    // vIndex: 1
    virtual void start() = 0;

    // vIndex: 2
    virtual double calculateDeltaTimeAndReset() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
