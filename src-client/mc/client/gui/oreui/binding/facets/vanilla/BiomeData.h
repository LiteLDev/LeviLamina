#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct BiomeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> label;
    ::ll::TypedStorage<4, 4, int>            id;
    ::ll::TypedStorage<4, 4, int>            dimension;
    // NOLINTEND
};

} // namespace OreUI
