#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PingedCompatibleServer {
public:
    // prevent constructor by default
    PingedCompatibleServer& operator=(PingedCompatibleServer const&);
    PingedCompatibleServer();

public:
    // NOLINTBEGIN
    // symbol: ??0PingedCompatibleServer@@QEAA@$$QEAU0@@Z
    MCAPI PingedCompatibleServer(struct PingedCompatibleServer&&);

    // symbol: ??0PingedCompatibleServer@@QEAA@AEBU0@@Z
    MCAPI PingedCompatibleServer(struct PingedCompatibleServer const&);

    // symbol: ??4PingedCompatibleServer@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct PingedCompatibleServer& operator=(struct PingedCompatibleServer&&);

    // symbol: ??1PingedCompatibleServer@@QEAA@XZ
    MCAPI ~PingedCompatibleServer();

    // NOLINTEND
};
