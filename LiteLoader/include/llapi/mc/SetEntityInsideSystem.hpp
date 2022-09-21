/**
 * @file  MC/SetEntityInsideSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SetEntityInsideSystem.
 *
 */
class SetEntityInsideSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETENTITYINSIDESYSTEM
public:
    class SetEntityInsideSystem& operator=(class SetEntityInsideSystem const &) = delete;
    SetEntityInsideSystem(class SetEntityInsideSystem const &) = delete;
    SetEntityInsideSystem() = delete;
#endif

public:
    /**
     * @hash   -1796552132
     * @symbol ?createCleanupSystem@SetEntityInsideSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @symbol ?createSideBySideSystem@SetEntityInsideSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSideBySideSystem();
    /**
     * @symbol ?createSpectatorFilter@SetEntityInsideSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSpectatorFilter();
    /**
     * @hash   -1415515538
     * @symbol ?createSystem@SetEntityInsideSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};