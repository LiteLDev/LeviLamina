#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class PlayerAbilitiesManager {
public:
    // prevent constructor by default
    PlayerAbilitiesManager& operator=(PlayerAbilitiesManager const&);
    PlayerAbilitiesManager(PlayerAbilitiesManager const&);
    PlayerAbilitiesManager();

public:
    // NOLINTBEGIN
    MCAPI explicit PlayerAbilitiesManager(gsl::not_null<class StackRefResult<class GameplayUserManager>> const&);

    MCAPI class LayeredAbilities* getPlayerAbilities(struct ActorUniqueID const&);

    MCAPI void sendAllPlayerAbilities(class Player const&);

    MCAPI void setPacketSender(class PacketSender&);

    MCAPI void setPlayerAbilities(struct ActorUniqueID const&, class LayeredAbilities const&);

    // NOLINTEND
};
