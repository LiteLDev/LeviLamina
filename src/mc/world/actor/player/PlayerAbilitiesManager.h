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
    // symbol: ??0PlayerAbilitiesManager@@QEAA@AEBV?$StackRefResult@VGameplayUserManager@@@@@Z
    MCAPI explicit PlayerAbilitiesManager(class StackRefResult<class GameplayUserManager> const&);

    // symbol: ?getPlayerAbilities@PlayerAbilitiesManager@@QEAAPEAVLayeredAbilities@@AEBUActorUniqueID@@@Z
    MCAPI class LayeredAbilities* getPlayerAbilities(struct ActorUniqueID const&);

    // symbol: ?sendAllPlayerAbilities@PlayerAbilitiesManager@@QEAAXAEBVPlayer@@@Z
    MCAPI void sendAllPlayerAbilities(class Player const&);

    // symbol: ?setPacketSender@PlayerAbilitiesManager@@QEAAXAEAVPacketSender@@@Z
    MCAPI void setPacketSender(class PacketSender&);

    // symbol: ?setPlayerAbilities@PlayerAbilitiesManager@@QEAAXAEBUActorUniqueID@@AEBVLayeredAbilities@@@Z
    MCAPI void setPlayerAbilities(struct ActorUniqueID const&, class LayeredAbilities const&);

    // NOLINTEND
};
