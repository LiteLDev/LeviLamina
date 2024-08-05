#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerLevelStorageSaveUtils {
// NOLINTBEGIN
MCAPI bool canSavePlayerWithLevelStorage(class EntityContext const&);

MCAPI class PlayerSuspendLevelStorageSaveToken suspendPlayerLevelStorageSave(class EntityContext&);
// NOLINTEND

}; // namespace PlayerLevelStorageSaveUtils
