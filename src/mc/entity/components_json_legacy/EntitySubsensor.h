#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitySubsensor {
public:
    // prevent constructor by default
    EntitySubsensor& operator=(EntitySubsensor const&);
    EntitySubsensor(EntitySubsensor const&);
    EntitySubsensor();

public:
    // NOLINTBEGIN
    MCAPI EntitySubsensor(class EntitySubsensor&&);

    MCAPI void senseEntities(
        class Actor&                                  actor,
        gsl::span<gsl::not_null<class Actor*>> const& nearbyActors,
        struct Tick const&                            currentTick,
        bool                                          relativeRange,
        bool                                          canFireEventWithNoEntities
    );

    MCAPI ~EntitySubsensor();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const NO_MAX_COUNT;

    // NOLINTEND
};
