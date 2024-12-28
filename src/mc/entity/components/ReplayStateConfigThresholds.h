#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReplayStateConfigThresholds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc820fd;
    ::ll::UntypedStorage<4, 4> mUnkee5f44;
    ::ll::UntypedStorage<4, 4> mUnkc58b4a;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplayStateConfigThresholds& operator=(ReplayStateConfigThresholds const&);
    ReplayStateConfigThresholds(ReplayStateConfigThresholds const&);
    ReplayStateConfigThresholds();
};
