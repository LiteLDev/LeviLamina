#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Player;
struct ActorHurtEvent;
struct PlayerDamageEvent;
struct PlayerOpenContainerEvent;
// clang-format on

class VanillaServerGameplayEventListener : public ::EventListenerDispatcher<::ActorEventListener>,
                                           public ::EventListenerDispatcher<::BlockEventListener>,
                                           public ::EventListenerDispatcher<::PlayerEventListener>,
                                           public ::EventListenerDispatcher<::LevelEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 34
    virtual ::EventResult onEvent(::ActorHurtEvent const& actorHurtEvent) /*override*/;

    // vIndex: 66
    virtual ::EventResult onEvent(::PlayerDamageEvent const& playerDamageEvent) /*override*/;

    // vIndex: 60
    virtual ::EventResult onEvent(::PlayerOpenContainerEvent const& playerOpenContainerEvent) /*override*/;

    // vIndex: 8
    virtual ::EventResult onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message) /*override*/;

    // vIndex: 7
    virtual ::EventResult onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod) /*override*/;

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
    virtual ~VanillaServerGameplayEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onEvent(::ActorHurtEvent const& actorHurtEvent);

    MCFOLD ::EventResult $onEvent(::PlayerDamageEvent const& playerDamageEvent);

    MCAPI ::EventResult $onEvent(::PlayerOpenContainerEvent const& playerOpenContainerEvent);

    MCAPI ::EventResult $onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message);

    MCAPI ::EventResult $onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);

    MCAPI ::EventResult $onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos);

    MCAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEventListenerDispatcherLevelEventListener();

    MCNAPI static void** $vftableForEventListenerDispatcherActorEventListener();

    MCNAPI static void** $vftableForEventListenerDispatcherBlockEventListener();

    MCNAPI static void** $vftableForEventListenerDispatcherPlayerEventListener();
    // NOLINTEND
};
