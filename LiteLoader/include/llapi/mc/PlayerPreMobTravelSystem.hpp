/**
 * @file  PlayerPreMobTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PlayerPreMobTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERPREMOBTRAVELSYSTEM
public:
    class PlayerPreMobTravelSystem& operator=(class PlayerPreMobTravelSystem const &) = delete;
    PlayerPreMobTravelSystem(class PlayerPreMobTravelSystem const &) = delete;
    PlayerPreMobTravelSystem() = delete;
#endif

public:
    /**
     * @symbol ?createPlayerPreMobTravelSystem\@PlayerPreMobTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerPreMobTravelSystem();

};
