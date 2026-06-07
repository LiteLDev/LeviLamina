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
    virtual ::EventResult onEvent(::ActorHurtEvent const&) /*override*/;

    virtual ::EventResult onEvent(::PlayerDamageEvent const&) /*override*/;

    virtual ::EventResult onEvent(::PlayerOpenContainerEvent const& playerOpenContainerEvent) /*override*/;

    virtual ::EventResult onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message) /*override*/;

    virtual ::EventResult onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod) /*override*/;

    virtual ::EventResult onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos) /*override*/;

#ifdef LL_PLAT_S
    virtual ::EventResult
    onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool) /*override*/;
#else // LL_PLAT_C
    virtual ::EventResult onBlockPlacedByPlayer(
        ::Player&         player,
        ::Block const&    placedBlock,
        ::BlockPos const& pos,
        bool              isUnderwater
    ) /*override*/;
#endif

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onEvent(::ActorHurtEvent const&);

    MCFOLD ::EventResult $onEvent(::PlayerDamageEvent const&);

    MCAPI ::EventResult $onEvent(::PlayerOpenContainerEvent const& playerOpenContainerEvent);

    MCAPI ::EventResult $onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message);

    MCAPI ::EventResult $onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);

    MCAPI ::EventResult $onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos);

    MCAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool);


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
