/**
 * @file  TravelMoveRequestSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class TravelMoveRequestSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAVELMOVEREQUESTSYSTEM
public:
    class TravelMoveRequestSystem& operator=(class TravelMoveRequestSystem const &) = delete;
    TravelMoveRequestSystem(class TravelMoveRequestSystem const &) = delete;
    TravelMoveRequestSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@TravelMoveRequestSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
