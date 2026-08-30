#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITickDeltaTimeManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITickDeltaTimeManagerProxy();

    virtual void start() = 0;

    virtual double calculateDeltaTimeAndReset() = 0;
    // NOLINTEND
};
