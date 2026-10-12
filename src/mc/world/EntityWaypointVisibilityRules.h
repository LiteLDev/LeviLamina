#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

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
    ::ll::TypedStorage<1, 1, uchar> mFlags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator()(::Actor const& actor) const;
    // NOLINTEND
};
