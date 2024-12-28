#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorEventListener;
class Block;
class BlockEventListener;
class BlockPos;
class LevelEventListener;
class Player;
class PlayerEventListener;
struct ActorHurtEvent;
struct PlayerDamageEvent;
struct PlayerOpenContainerEvent;
// clang-format on

class VanillaServerGameplayEventListener : public ::EventListenerDispatcher<::ActorEventListener>,
                                           public ::EventListenerDispatcher<::BlockEventListener>,
                                           public ::EventListenerDispatcher<::PlayerEventListener>,
                                           public ::EventListenerDispatcher<::LevelEventListener> {
public:
    // prevent constructor by default
    VanillaServerGameplayEventListener& operator=(VanillaServerGameplayEventListener const&);
    VanillaServerGameplayEventListener(VanillaServerGameplayEventListener const&);
    VanillaServerGameplayEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 32
    virtual ::EventResult onEvent(::ActorHurtEvent const& actorHurtEvent) /*override*/;

    // vIndex: 63
    virtual ::EventResult onEvent(::PlayerDamageEvent const& playerDamageEvent) /*override*/;

    // vIndex: 57
    virtual ::EventResult onEvent(::PlayerOpenContainerEvent const& playerOpenContainerEvent) /*override*/;

    // vIndex: 8
    virtual ::EventResult onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message) /*override*/;

    // vIndex: 7
    virtual ::EventResult onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos) /*override*/;

    // vIndex: 1
    virtual ::EventResult onBlockPlacedByPlayer(
        ::Player&         player,
        ::Block const&    placedBlock,
        ::BlockPos const& pos,
        bool              isUnderwater
    ) /*override*/;

    // vIndex: 0
    virtual ~VanillaServerGameplayEventListener() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ActorHurtEvent const& actorHurtEvent);

    MCAPI ::EventResult $onEvent(::PlayerDamageEvent const& playerDamageEvent);

    MCAPI ::EventResult $onEvent(::PlayerOpenContainerEvent const& playerOpenContainerEvent);

    MCAPI ::EventResult $onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message);

    MCAPI ::EventResult $onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos);

    MCAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEventListenerDispatcherLevelEventListener();

    MCAPI static void** $vftableForEventListenerDispatcherActorEventListener();

    MCAPI static void** $vftableForEventListenerDispatcherBlockEventListener();

    MCAPI static void** $vftableForEventListenerDispatcherPlayerEventListener();
    // NOLINTEND
};
