/**
 * @file  HorsePreTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class HorsePreTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSEPRETRAVELSYSTEM
public:
    class HorsePreTravelSystem& operator=(class HorsePreTravelSystem const &) = delete;
    HorsePreTravelSystem(class HorsePreTravelSystem const &) = delete;
    HorsePreTravelSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createHorsePreTravelSystem\@HorsePreTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createHorsePreTravelSystem();

};