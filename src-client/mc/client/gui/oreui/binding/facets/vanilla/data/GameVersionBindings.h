#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct GameVersionBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  major;
    ::ll::TypedStorage<4, 4, int>  minor;
    ::ll::TypedStorage<4, 4, int>  patch;
    ::ll::TypedStorage<4, 4, int>  revision;
    ::ll::TypedStorage<1, 1, bool> isBeta;
    // NOLINTEND
};

} // namespace OreUI
