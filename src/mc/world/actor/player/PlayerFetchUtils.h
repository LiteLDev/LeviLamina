#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace PlayerFetchUtils {
// NOLINTBEGIN
// symbol: ?findActivePlayerByActorUniqueID@PlayerFetchUtils@@YAPEAVPlayer@@AEBVGameplayUserManager@@UActorUniqueID@@@Z
MCAPI class Player*
findActivePlayerByActorUniqueID(class GameplayUserManager const&, struct ActorUniqueID actorUniqueID);

// symbol:
// ?findPlayer@PlayerFetchUtils@@YAPEAVPlayer@@AEBVGameplayUserManager@@V?$function@$$A6A_NAEBVEntityContext@@@Z@std@@@Z
MCAPI class Player*
findPlayer(class GameplayUserManager const&, std::function<bool(class EntityContext const&)> callback);

// symbol:
// ?findPlayer@PlayerFetchUtils@@YAPEAVPlayer@@AEBVGameplayUserManager@@V?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
MCAPI class Player* findPlayer(class GameplayUserManager const&, std::function<bool(class Player const&)> callback);

// symbol:
// ?findPlayerByName@PlayerFetchUtils@@YAPEAVPlayer@@AEBVGameplayUserManager@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI class Player* findPlayerByName(class GameplayUserManager const&, std::string const& name);

// symbol:
// ?findPlayerByPlatformId@PlayerFetchUtils@@YAPEAVPlayer@@AEBVGameplayUserManager@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI class Player* findPlayerByPlatformId(class GameplayUserManager const&, std::string const& platformOnlineId);

// symbol:
// ?findPlayerByServerId@PlayerFetchUtils@@YAPEAVPlayer@@AEBVGameplayUserManager@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI class Player* findPlayerByServerId(class GameplayUserManager const&, std::string const& serverId);

// symbol: ?findPlayerByUUID@PlayerFetchUtils@@YAPEAVPlayer@@AEBVGameplayUserManager@@AEBVUUID@mce@@@Z
MCAPI class Player* findPlayerByUUID(class GameplayUserManager const&, class mce::UUID const& uuid);

// symbol:
// ?findPlayerByXuid@PlayerFetchUtils@@YAPEAVPlayer@@AEBVGameplayUserManager@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI class Player* findPlayerByXuid(class GameplayUserManager const&, std::string const& xuid);

// symbol: ?findPrimaryLocalPlayer@PlayerFetchUtils@@YAPEAVPlayer@@AEBVGameplayUserManager@@@Z
MCAPI class Player* findPrimaryLocalPlayer(class GameplayUserManager const&);
// NOLINTEND

}; // namespace PlayerFetchUtils
