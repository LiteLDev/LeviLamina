#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WardenSpawnTrackerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka897e7;
    ::ll::UntypedStorage<4, 4> mUnk927f96;
    ::ll::UntypedStorage<4, 4> mUnk13cc50;
    // NOLINTEND

public:
    // prevent constructor by default
    WardenSpawnTrackerComponent& operator=(WardenSpawnTrackerComponent const&);
    WardenSpawnTrackerComponent(WardenSpawnTrackerComponent const&);
    WardenSpawnTrackerComponent();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_THREAT_LEVEL();
    // NOLINTEND
};
