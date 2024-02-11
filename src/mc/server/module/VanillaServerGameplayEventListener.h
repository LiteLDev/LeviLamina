#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class VanillaServerGameplayEventListener {
public:
    // prevent constructor by default
    VanillaServerGameplayEventListener& operator=(VanillaServerGameplayEventListener const&);
    VanillaServerGameplayEventListener(VanillaServerGameplayEventListener const&);
    VanillaServerGameplayEventListener();

public:
    // NOLINTBEGIN
    // symbol:
    // ?onActorCreationAttemptFailed@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVActor@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI ::EventResult onActorCreationAttemptFailed(class Actor& actor, std::string_view message);

    // symbol:
    // ?onBlockInteractedWith@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCVAPI ::EventResult onBlockInteractedWith(class Player& player, class BlockPos const& blockPos);

    // symbol:
    // ?onBlockPlacedByPlayer@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
    MCVAPI ::EventResult onBlockPlacedByPlayer(
        class Player&         player,
        class Block const&    placedBlock,
        class BlockPos const& pos,
        bool                  isUnderwater
    );

    // symbol: ?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUPlayerDamageEvent@@@Z
    MCVAPI ::EventResult onEvent(struct PlayerDamageEvent const& playerDamageEvent);

    // symbol: ?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUActorHurtEvent@@@Z
    MCVAPI ::EventResult onEvent(struct ActorHurtEvent const& actorHurtEvent);

    // symbol: ?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUPlayerOpenContainerEvent@@@Z
    MCVAPI ::EventResult onEvent(struct PlayerOpenContainerEvent const& playerOpenContainerEvent);

    // NOLINTEND
};
