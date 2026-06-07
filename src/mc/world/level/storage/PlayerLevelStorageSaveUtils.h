#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class PlayerSuspendLevelStorageSaveToken;
// clang-format on

namespace PlayerLevelStorageSaveUtils {
// functions
// NOLINTBEGIN
MCNAPI bool canSavePlayerWithLevelStorage(::EntityContext const& entity);

MCNAPI ::PlayerSuspendLevelStorageSaveToken suspendPlayerLevelStorageSave(::EntityContext& entity);
// NOLINTEND

} // namespace PlayerLevelStorageSaveUtils
