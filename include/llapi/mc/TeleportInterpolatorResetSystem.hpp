/**
 * @file  TeleportInterpolatorResetSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TeleportInterpolatorResetSystem.
 *
 */
class TeleportInterpolatorResetSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTINTERPOLATORRESETSYSTEM
public:
    class TeleportInterpolatorResetSystem& operator=(class TeleportInterpolatorResetSystem const &) = delete;
    TeleportInterpolatorResetSystem(class TeleportInterpolatorResetSystem const &) = delete;
    TeleportInterpolatorResetSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createTeleportInterpolatorResetSystem\@TeleportInterpolatorResetSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTeleportInterpolatorResetSystem();

};