#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelDataOverrideValues {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk4558ca;
    ::ll::UntypedStorage<8, 24> mUnkace0f9;
    ::ll::UntypedStorage<8, 64> mUnk5bc4ce;
    ::ll::UntypedStorage<1, 10> mUnk363223;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDataOverrideValues& operator=(LevelDataOverrideValues const&);
    LevelDataOverrideValues(LevelDataOverrideValues const&);
    LevelDataOverrideValues();

};
