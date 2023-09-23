#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockPosNotificationSystem {
// NOLINTBEGIN
// symbol: ?createCleanupSystem@BlockPosNotificationSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createCleanupSystem();

// symbol: ?createFilterSystem@BlockPosNotificationSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createFilterSystem();

// symbol: ?createGenericStandOnSystem@BlockPosNotificationSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createGenericStandOnSystem();

// symbol: ?createHoneyOrSlimeStandOnSystem@BlockPosNotificationSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createHoneyOrSlimeStandOnSystem();

// symbol: ?onStandOnSlowingBlock@BlockPosNotificationSystem@@YAXAEAVVec3@@_N@Z
MCAPI void onStandOnSlowingBlock(class Vec3&, bool);
// NOLINTEND

}; // namespace BlockPosNotificationSystem
