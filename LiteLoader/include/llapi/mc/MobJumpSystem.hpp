/**
 * @file  MobJumpSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace MobJumpSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?createCleanupSystem\@MobJumpSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @symbol ?createDecrementNoJumpDelaySystem\@MobJumpSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createDecrementNoJumpDelaySystem();
    /**
     * @symbol ?createMobJumpSystem\@MobJumpSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createMobJumpSystem();
    /**
     * @symbol ?createResetNoJumpDelaySystem\@MobJumpSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createResetNoJumpDelaySystem();

};