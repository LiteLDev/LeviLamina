#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityWaypointVisibilityRules {
public:
    // EntityWaypointVisibilityRules inner types define
    enum class Flag : uchar {
        Sneaking  = 1,
        Invisible = 2,
        Dead      = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkdc4ee9;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityWaypointVisibilityRules& operator=(EntityWaypointVisibilityRules const&);
    EntityWaypointVisibilityRules(EntityWaypointVisibilityRules const&);
    EntityWaypointVisibilityRules();
};
