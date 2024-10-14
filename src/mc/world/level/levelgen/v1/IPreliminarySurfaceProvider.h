#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"

class IPreliminarySurfaceProvider {
public:
    // prevent constructor by default
    IPreliminarySurfaceProvider& operator=(IPreliminarySurfaceProvider const&);
    IPreliminarySurfaceProvider(IPreliminarySurfaceProvider const&);
    IPreliminarySurfaceProvider();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPreliminarySurfaceProvider();

    // vIndex: 1
    virtual std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4> worldQuartPos) const = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
