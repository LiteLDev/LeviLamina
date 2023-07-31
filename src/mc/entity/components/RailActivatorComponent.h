#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RailActivatorComponent {

public:
    // prevent constructor by default
    RailActivatorComponent& operator=(RailActivatorComponent const&) = delete;
    RailActivatorComponent(RailActivatorComponent const&)            = delete;
    RailActivatorComponent()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?ejectAllPassengers\@RailActivatorComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void ejectAllPassengers(class Actor&);
    // NOLINTEND
};
