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
    // symbol: ??1PathPart@Core@@QEAA@XZ
    MCAPI ~PathPart();

    // NOLINTEND
};

}; // namespace Core
