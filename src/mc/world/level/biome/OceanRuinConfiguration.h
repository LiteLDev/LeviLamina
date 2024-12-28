#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OceanRuinConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk86f77f;
    ::ll::UntypedStorage<4, 4> mUnkcc5f9a;
    ::ll::UntypedStorage<4, 4> mUnk292ff3;
    // NOLINTEND

public:
    // prevent constructor by default
    OceanRuinConfiguration& operator=(OceanRuinConfiguration const&);
    OceanRuinConfiguration(OceanRuinConfiguration const&);
    OceanRuinConfiguration();
};
