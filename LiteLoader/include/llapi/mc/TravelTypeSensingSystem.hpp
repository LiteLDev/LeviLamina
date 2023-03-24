/**
 * @file  TravelTypeSensingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class TravelTypeSensingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAVELTYPESENSINGSYSTEM
public:
    class TravelTypeSensingSystem& operator=(class TravelTypeSensingSystem const &) = delete;
    TravelTypeSensingSystem(class TravelTypeSensingSystem const &) = delete;
    TravelTypeSensingSystem() = delete;
#endif

public:
    /**
     * @symbol ?createTravelTypeSensingSideBySideSystem\@TravelTypeSensingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTravelTypeSensingSideBySideSystem();
    /**
     * @symbol ?createTravelTypeSensingSystem\@TravelTypeSensingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTravelTypeSensingSystem();

};
