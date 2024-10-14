#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class PathPart {
public:
    // prevent constructor by default
    PathPart& operator=(PathPart const&);
    PathPart(PathPart const&);
    PathPart();

public:
    // NOLINTBEGIN
    MCAPI ~PathPart();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Core
