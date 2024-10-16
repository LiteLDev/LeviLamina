#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetherSurfaceFlag {
public:
    // prevent constructor by default
    NetherSurfaceFlag& operator=(NetherSurfaceFlag const&);
    NetherSurfaceFlag(NetherSurfaceFlag const&);
    NetherSurfaceFlag();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherSurfaceFlag() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
