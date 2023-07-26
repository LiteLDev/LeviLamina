#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExperienceOrbFlag {

public:
    // prevent constructor by default
    ExperienceOrbFlag& operator=(ExperienceOrbFlag const&) = delete;
    ExperienceOrbFlag(ExperienceOrbFlag const&)            = delete;
    ExperienceOrbFlag()                                    = delete;
};
