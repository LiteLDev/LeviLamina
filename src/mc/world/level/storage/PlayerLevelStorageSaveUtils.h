#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerLevelStorageSaveUtils {
// NOLINTBEGIN
MCAPI bool canSavePlayerWithLevelStorage(class EntityContext const& entity);

MCAPI class PlayerSuspendLevelStorageSaveToken suspendPlayerLevelStorageSave(class EntityContext& entity);
// NOLINTEND

}; // namespace PlayerLevelStorageSaveUtils
