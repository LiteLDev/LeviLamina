/**
 * @file  ResetPositionModeSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ResetPositionModeSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETPOSITIONMODESYSTEM
public:
    class ResetPositionModeSystem& operator=(class ResetPositionModeSystem const &) = delete;
    ResetPositionModeSystem(class ResetPositionModeSystem const &) = delete;
    ResetPositionModeSystem() = delete;
#endif

public:
    /**
     * @symbol ?createResetPositionModeSystem@ResetPositionModeSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createResetPositionModeSystem();

};