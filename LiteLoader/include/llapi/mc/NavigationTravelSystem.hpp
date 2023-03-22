/**
 * @file  NavigationTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class NavigationTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONTRAVELSYSTEM
public:
    class NavigationTravelSystem& operator=(class NavigationTravelSystem const &) = delete;
    NavigationTravelSystem(class NavigationTravelSystem const &) = delete;
    NavigationTravelSystem() = delete;
#endif

public:
    /**
     * @symbol ?createNavigationTravelSystem\@NavigationTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createNavigationTravelSystem();

};
