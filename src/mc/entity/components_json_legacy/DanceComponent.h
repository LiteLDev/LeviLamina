#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DanceComponent {
public:
    // prevent constructor by default
    DanceComponent& operator=(DanceComponent const&);
    DanceComponent(DanceComponent const&);

public:
    // NOLINTBEGIN
    MCAPI DanceComponent();

    MCAPI bool inListenDistance(class Vec3 const& pos) const;

    MCAPI void initFromDefinition(class Actor& actor);

    MCAPI void initFromDefinition(class Actor& actor, float distance);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
