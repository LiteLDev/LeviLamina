#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EnvironmentRequirement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk43318f;
    ::ll::UntypedStorage<4, 4>  mUnkf24b2c;
    ::ll::UntypedStorage<4, 4>  mUnkaa15da;
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentRequirement& operator=(EnvironmentRequirement const&);
    EnvironmentRequirement(EnvironmentRequirement const&);
    EnvironmentRequirement();
};
