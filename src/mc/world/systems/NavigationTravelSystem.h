#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NavigationTravelSystem {

public:
    // prevent constructor by default
    NavigationTravelSystem& operator=(NavigationTravelSystem const&) = delete;
    NavigationTravelSystem(NavigationTravelSystem const&)            = delete;
    NavigationTravelSystem()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createNavigationTravelSystem\@NavigationTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createNavigationTravelSystem();
    // NOLINTEND
};
