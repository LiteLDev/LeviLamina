#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PingedCompatibleServer {
public:
    // prevent constructor by default
    PingedCompatibleServer& operator=(PingedCompatibleServer const&);
    PingedCompatibleServer();

public:
    // NOLINTBEGIN
    MCAPI PingedCompatibleServer(struct PingedCompatibleServer&&);

    MCAPI PingedCompatibleServer(struct PingedCompatibleServer const&);

    MCAPI struct PingedCompatibleServer& operator=(struct PingedCompatibleServer&&);

    MCAPI ~PingedCompatibleServer();

    // NOLINTEND
};
