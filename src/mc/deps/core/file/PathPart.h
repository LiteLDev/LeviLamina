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
};

}; // namespace Core
