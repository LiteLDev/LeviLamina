#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RailActivatorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILACTIVATORCOMPONENT
public:
    RailActivatorComponent& operator=(RailActivatorComponent const&) = delete;
    RailActivatorComponent(RailActivatorComponent const&)            = delete;
    RailActivatorComponent()                                         = delete;
#endif

public:
    /**
     * @symbol ?ejectAllPassengers\@RailActivatorComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void ejectAllPassengers(class Actor&);
};
