#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::FloodLevel {

struct FloodSearchOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 28> mUnk118929;
    ::ll::UntypedStorage<4, 4>  mUnk8d94a2;
    // NOLINTEND

public:
    // prevent constructor by default
    FloodSearchOptions& operator=(FloodSearchOptions const&);
    FloodSearchOptions(FloodSearchOptions const&);
    FloodSearchOptions();
};

} // namespace Editor::BlockUtils::FloodLevel
