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
MCNAPI ::Player*
findActivePlayerByActorUniqueID(::GameplayUserManager const& gameplayUserManager, ::ActorUniqueID actorUniqueID);

MCNAPI ::Player*
findPlayer(::GameplayUserManager const& gameplayUserManager, ::std::function<bool(::EntityContext const&)> callback);

MCNAPI ::Player* findPlayerByName(::GameplayUserManager const& gameplayUserManager, ::std::string const& name);
// NOLINTEND

} // namespace PlayerFetchUtils
