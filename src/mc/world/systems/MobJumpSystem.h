#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobJumpSystem {
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

}; // namespace MobJumpSystem
