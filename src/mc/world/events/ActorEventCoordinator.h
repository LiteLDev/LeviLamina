#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/events/ActorGameplayEvent.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableActorGameplayEvent.h"

class ActorEventCoordinator {
public:
    // prevent constructor by default
    ActorEventCoordinator& operator=(ActorEventCoordinator const&);
    ActorEventCoordinator(ActorEventCoordinator const&);
    ActorEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorEventCoordinator() = default;

    MCAPI class ActorGameplayHandler& getActorGameplayHandler();

    MCAPI void registerActorGameplayHandler(std::unique_ptr<class ActorGameplayHandler>&& handler);

    MCAPI void registerWithGameplayUserManagerEvents(class GameplayUserManager& gameplayUserManager);

    MCAPI void sendActorCreated(class Actor& actor, ::ActorInitializationMethod initializationMethod);

    MCAPI void sendActorCreationAttemptFailed(class Actor& actor, std::string_view reason);

    MCAPI void sendActorSneakChanged(class Actor& actor, bool isSneaking);

    MCAPI void sendActorStartRiding(class Actor& actor, class Actor& vehicle);

    MCAPI void
    sendActorStopRiding(class Actor& actor, bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles);

    MCAPI void sendActorTargetAcquired(class Actor& actor, class Actor& target);

    MCAPI void sendActorTeleported(class Actor& actor);

    MCAPI void sendActorTick(class Actor& actor);

    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct ActorGameplayEvent<::CoordinatorResult>> const& event);

    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct MutableActorGameplayEvent<::CoordinatorResult>> event);

    MCAPI void sendEvent(class EventRef<struct ActorGameplayEvent<void>> const& event);

    MCAPI void sendServerPlayerAuthInputApplied(class Player& player);

    MCAPI void sendServerPlayerAuthInputReceived(class Player& player);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onGameplayUserAdded(class EntityContext& entity);

    // NOLINTEND
};
