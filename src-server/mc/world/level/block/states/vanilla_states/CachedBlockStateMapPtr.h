#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockState;
// clang-format on

namespace VanillaStates {

struct CachedBlockStateMapPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockState const*> ptr;
    ::ll::TypedStorage<4, 4, int>                 mapVersion;
    // NOLINTEND
};

} // namespace VanillaStates
