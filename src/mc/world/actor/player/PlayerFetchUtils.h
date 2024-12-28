#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GameplayUserManager;
class Player;
struct ActorUniqueID;
namespace mce { class UUID; }
// clang-format on

namespace PlayerFetchUtils {
// functions
// NOLINTBEGIN
MCAPI ::Player*
findActivePlayerByActorUniqueID(::GameplayUserManager const& gameplayUserManager, ::ActorUniqueID actorUniqueID);

MCAPI ::Player*
findPlayer(::GameplayUserManager const& gameplayUserManager, ::std::function<bool(::Player const&)> callback);

MCAPI ::Player*
findPlayer(::GameplayUserManager const& gameplayUserManager, ::std::function<bool(::EntityContext const&)> callback);

MCAPI ::Player* findPlayerByName(::GameplayUserManager const& gameplayUserManager, ::std::string const& name);

MCAPI ::Player*
findPlayerByPlatformId(::GameplayUserManager const& gameplayUserManager, ::std::string const& platformOnlineId);

MCAPI ::Player* findPlayerByServerId(::GameplayUserManager const& gameplayUserManager, ::std::string const& serverId);

MCAPI ::Player* findPlayerByUUID(::GameplayUserManager const& gameplayUserManager, ::mce::UUID const& uuid);

MCAPI ::Player* findPlayerByXuid(::GameplayUserManager const& gameplayUserManager, ::std::string const& xuid);

MCAPI ::Player* findPrimaryLocalPlayer(::GameplayUserManager const& gameplayUserManager);
// NOLINTEND

} // namespace PlayerFetchUtils
