#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NavigationTravelSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONTRAVELSYSTEM
public:
    NavigationTravelSystem& operator=(NavigationTravelSystem const&) = delete;
    NavigationTravelSystem(NavigationTravelSystem const&)            = delete;
    NavigationTravelSystem()                                         = delete;
#endif

public:
    /**
     * @symbol ?createNavigationTravelSystem\@NavigationTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createNavigationTravelSystem();
};
