#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GameplayUserManager;
class Player;
// clang-format on

namespace PlayerFetchUtils {
// functions
// NOLINTBEGIN
MCAPI ::Player*
findPlayer(::GameplayUserManager const& gameplayUserManager, ::std::function<bool(::EntityContext const&)> callback);
// NOLINTEND

} // namespace PlayerFetchUtils
