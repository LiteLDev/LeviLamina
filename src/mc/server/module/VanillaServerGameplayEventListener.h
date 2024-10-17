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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForEventListenerDispatcherActorEventListener();

    MCAPI static void** vftableForEventListenerDispatcherBlockEventListener();

    MCAPI static void** vftableForEventListenerDispatcherLevelEventListener();

    MCAPI static void** vftableForEventListenerDispatcherPlayerEventListener();

    MCAPI ::EventResult onActorCreationAttemptFailed$(class Actor& actor, std::string_view message);

    MCAPI ::EventResult onBlockInteractedWith$(class Player& player, class BlockPos const& blockPos);

    MCAPI ::EventResult onBlockPlacedByPlayer$(
        class Player&         player,
        class Block const&    placedBlock,
        class BlockPos const& pos,
        bool                  isUnderwater
    );

    MCAPI ::EventResult onEvent$(struct PlayerDamageEvent const& playerDamageEvent);

    MCAPI ::EventResult onEvent$(struct ActorHurtEvent const& actorHurtEvent);

    MCAPI ::EventResult onEvent$(struct PlayerOpenContainerEvent const& playerOpenContainerEvent);

    // NOLINTEND
};
