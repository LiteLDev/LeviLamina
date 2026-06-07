#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"

class IPreliminarySurfaceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPreliminarySurfaceProvider() = default;

    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
