#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HasLightweightFamilyFlag {
public:
    // prevent constructor by default
    HasLightweightFamilyFlag& operator=(HasLightweightFamilyFlag const&);
    HasLightweightFamilyFlag(HasLightweightFamilyFlag const&);
    HasLightweightFamilyFlag();
};
