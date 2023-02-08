/**
 * @file  PlayerPostTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PlayerPostTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERPOSTTRAVELSYSTEM
public:
    class PlayerPostTravelSystem& operator=(class PlayerPostTravelSystem const &) = delete;
    PlayerPostTravelSystem(class PlayerPostTravelSystem const &) = delete;
    PlayerPostTravelSystem() = delete;
#endif

public:
    /**
     * @symbol  ?create\@PlayerPostTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};