/**
 * @file  TeleportPositionModeEventSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TeleportPositionModeEventSystem.
 *
 */
class TeleportPositionModeEventSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTPOSITIONMODEEVENTSYSTEM
public:
    class TeleportPositionModeEventSystem& operator=(class TeleportPositionModeEventSystem const &) = delete;
    TeleportPositionModeEventSystem(class TeleportPositionModeEventSystem const &) = delete;
    TeleportPositionModeEventSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createTeleportPositionModeEventSystem\@TeleportPositionModeEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTeleportPositionModeEventSystem();

};