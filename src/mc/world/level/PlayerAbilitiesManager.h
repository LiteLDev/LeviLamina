#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

class PlayerAbilitiesManager {
public:
    // prevent constructor by default
    PlayerAbilitiesManager& operator=(PlayerAbilitiesManager const&);
    PlayerAbilitiesManager(PlayerAbilitiesManager const&);
    PlayerAbilitiesManager();

public:
    // NOLINTBEGIN
    MCAPI explicit PlayerAbilitiesManager(
        gsl::not_null<class StackRefResult<class GameplayUserManager>> const& gameplayUserManager
    );

    MCAPI class LayeredAbilities* getPlayerAbilities(struct ActorUniqueID const& playerId);

    MCAPI void sendAllPlayerAbilities(class Player const& playerReference);

    MCAPI void setPacketSender(class PacketSender& packetSender);

    MCAPI void setPlayerAbilities(struct ActorUniqueID const& playerId, class LayeredAbilities const& abilities);

    // NOLINTEND
};
