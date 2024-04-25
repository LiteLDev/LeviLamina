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
    // vIndex: 0, symbol: __gen_??1TickDeltaTimeManagerProxy@@UEAA@XZ
    virtual ~TickDeltaTimeManagerProxy() = default;

    // vIndex: 1, symbol: ?start@TickDeltaTimeManagerProxy@@UEAAXXZ
    virtual void start();

    // vIndex: 2, symbol: ?calculateDeltaTimeAndReset@TickDeltaTimeManagerProxy@@UEAANXZ
    virtual double calculateDeltaTimeAndReset();

    // symbol: ??0TickDeltaTimeManagerProxy@@QEAA@XZ
    MCAPI TickDeltaTimeManagerProxy();

    // NOLINTEND
};
