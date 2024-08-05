#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/ITickDeltaTimeManagerProxy.h"

class TickDeltaTimeManagerProxy : public ::ITickDeltaTimeManagerProxy {
public:
    // prevent constructor by default
    TickDeltaTimeManagerProxy& operator=(TickDeltaTimeManagerProxy const&);
    TickDeltaTimeManagerProxy(TickDeltaTimeManagerProxy const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TickDeltaTimeManagerProxy() = default;

    // vIndex: 1
    virtual void start();

    // vIndex: 2
    virtual double calculateDeltaTimeAndReset();

    MCAPI TickDeltaTimeManagerProxy();

    // NOLINTEND
};
