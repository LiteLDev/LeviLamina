#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace PlayerFetchUtils {
// NOLINTBEGIN
MCAPI class Player*
findActivePlayerByActorUniqueID(class GameplayUserManager const&, struct ActorUniqueID actorUniqueID);

MCAPI class Player*
findPlayer(class GameplayUserManager const&, std::function<bool(class EntityContext const&)> callback);

MCAPI class Player* findPlayer(class GameplayUserManager const&, std::function<bool(class Player const&)> callback);

MCAPI class Player* findPlayerByName(class GameplayUserManager const&, std::string const& name);

MCAPI class Player* findPlayerByPlatformId(class GameplayUserManager const&, std::string const& platformOnlineId);

MCAPI class Player* findPlayerByServerId(class GameplayUserManager const&, std::string const& serverId);

MCAPI class Player* findPlayerByUUID(class GameplayUserManager const&, class mce::UUID const& uuid);

MCAPI class Player* findPlayerByXuid(class GameplayUserManager const&, std::string const& xuid);

MCAPI class Player* findPrimaryLocalPlayer(class GameplayUserManager const&);
// NOLINTEND

}; // namespace PlayerFetchUtils
