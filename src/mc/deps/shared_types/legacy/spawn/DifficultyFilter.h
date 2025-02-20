#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct DifficultyFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkde3067;
    ::ll::UntypedStorage<4, 4> mUnk9fd5ec;
    // NOLINTEND

public:
    // prevent constructor by default
    DifficultyFilter& operator=(DifficultyFilter const&);
    DifficultyFilter(DifficultyFilter const&);
    DifficultyFilter();
};

} // namespace SharedTypes::Legacy::Spawn
