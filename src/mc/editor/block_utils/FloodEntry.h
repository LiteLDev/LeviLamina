#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::FloodLevel {

struct FloodEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk2e922e;
    ::ll::UntypedStorage<1, 1>  mUnka185f2;
    // NOLINTEND

public:
    // prevent constructor by default
    FloodEntry& operator=(FloodEntry const&);
    FloodEntry(FloodEntry const&);
    FloodEntry();
};

} // namespace Editor::BlockUtils::FloodLevel
