/**
 * @file  AirTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class AirTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AIRTRAVELSYSTEM
public:
    class AirTravelSystem& operator=(class AirTravelSystem const &) = delete;
    AirTravelSystem(class AirTravelSystem const &) = delete;
    AirTravelSystem() = delete;
#endif

public:
    /**
     * @symbol ?createAirTravelSystem\@AirTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAirTravelSystem();

};
