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
    MCVAPI ::EventResult onActorCreationAttemptFailed(class Actor& actor, std::string_view message);

    MCVAPI ::EventResult onBlockInteractedWith(class Player& player, class BlockPos const& blockPos);

    MCVAPI ::EventResult onBlockPlacedByPlayer(
        class Player&         player,
        class Block const&    placedBlock,
        class BlockPos const& pos,
        bool                  isUnderwater
    );

    MCVAPI ::EventResult onEvent(struct PlayerDamageEvent const& playerDamageEvent);

    MCVAPI ::EventResult onEvent(struct ActorHurtEvent const& actorHurtEvent);

    MCVAPI ::EventResult onEvent(struct PlayerOpenContainerEvent const& playerOpenContainerEvent);

    // NOLINTEND
};
