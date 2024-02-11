#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerLevelStorageSaveUtils {
// NOLINTBEGIN
// symbol: ?canSavePlayerWithLevelStorage@PlayerLevelStorageSaveUtils@@YA_NAEBVEntityContext@@@Z
MCAPI bool canSavePlayerWithLevelStorage(class EntityContext const&);

// symbol:
// ?suspendPlayerLevelStorageSave@PlayerLevelStorageSaveUtils@@YA?AVPlayerSuspendLevelStorageSaveToken@@AEAVEntityContext@@@Z
MCAPI class PlayerSuspendLevelStorageSaveToken suspendPlayerLevelStorageSave(class EntityContext&);
// NOLINTEND

}; // namespace PlayerLevelStorageSaveUtils
