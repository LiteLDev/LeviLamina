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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
