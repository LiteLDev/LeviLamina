#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/events/ActorGameplayEvent.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableActorGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorEventListener;
class ActorGameplayHandler;
class EntityContext;
class IActorManagerConnector;
class IGameplayUserManagerConnector;
class Player;
// clang-format on

class ActorEventCoordinator : public ::EventCoordinator<::ActorEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9c4a71;
    ::ll::UntypedStorage<8, 16> mUnk18d230;
    ::ll::UntypedStorage<8, 16> mUnk22f5f2;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorEventCoordinator& operator=(ActorEventCoordinator const&);
    ActorEventCoordinator(ActorEventCoordinator const&);
    ActorEventCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onGameplayUserAdded(::EntityContext& entity);

    MCAPI void _postReloadActorAdded(::Actor& actor, ::ActorInitializationMethod initializationMethod);

    MCAPI ::ActorGameplayHandler& getActorGameplayHandler();

    MCAPI void registerActorGameplayHandler(::std::unique_ptr<::ActorGameplayHandler>&& handler);

    MCAPI void registerWithActorManagerEvents(::IActorManagerConnector& actorManagerConnector);

    MCAPI void registerWithGameplayUserManagerEvents(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCAPI void sendActorCreationAttemptFailed(::Actor& actor, ::std::string_view reason);

    MCAPI void sendActorSneakChanged(::Actor& actor, bool isSneaking);

    MCAPI void sendActorStartRiding(::Actor& actor, ::Actor& vehicle);

    MCAPI void
    sendActorStopRiding(::Actor& actor, bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles);

    MCAPI void sendActorTargetAcquired(::Actor& actor, ::Actor& target);

    MCAPI void sendActorTeleported(::Actor& actor);

    MCAPI void sendActorTick(::Actor& actor);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutableActorGameplayEvent<::CoordinatorResult>> event);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::ActorGameplayEvent<::CoordinatorResult>> const& event);

    MCAPI void sendEvent(::EventRef<::ActorGameplayEvent<void>> const& event);

    MCAPI void sendServerPlayerAuthInputApplied(::Player& player);

    MCAPI void sendServerPlayerAuthInputReceived(::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
