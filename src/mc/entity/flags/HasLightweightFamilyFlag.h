#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HasLightweightFamilyFlag {

public:
    // prevent constructor by default
    HasLightweightFamilyFlag& operator=(HasLightweightFamilyFlag const&) = delete;
    HasLightweightFamilyFlag(HasLightweightFamilyFlag const&)            = delete;
    HasLightweightFamilyFlag()                                           = delete;
};
