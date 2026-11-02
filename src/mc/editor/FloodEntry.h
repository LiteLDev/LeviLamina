#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct FloodEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk4ed8d1;
    ::ll::UntypedStorage<4, 4>  mUnkf1b620;
    // NOLINTEND

public:
    // prevent constructor by default
    FloodEntry& operator=(FloodEntry const&);
    FloodEntry(FloodEntry const&);
    FloodEntry();
};

} // namespace Editor::InteractiveTools
