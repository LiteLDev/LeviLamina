#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GameplayUserManager;
class Player;
struct ActorUniqueID;
// clang-format on

namespace PlayerFetchUtils {
// functions
// NOLINTBEGIN
MCAPI ::Player*
findActivePlayerByActorUniqueID(::GameplayUserManager const& gameplayUserManager, ::ActorUniqueID actorUniqueID);

MCAPI ::Player*
findPlayer(::GameplayUserManager const& gameplayUserManager, ::std::function<bool(::EntityContext const&)> callback);

MCAPI ::Player* findPlayerByName(::GameplayUserManager const& gameplayUserManager, ::std::string const& name);
// NOLINTEND

} // namespace PlayerFetchUtils
