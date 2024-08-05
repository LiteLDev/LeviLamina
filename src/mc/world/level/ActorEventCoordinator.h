#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/events/ActorGameplayEvent.h"
#include "mc/events/MutableActorGameplayEvent.h"
#include "mc/world/events/EventRef.h"

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

    MCAPI void registerWithGameplayUserManagerEvents(class GameplayUserManager&);

    MCAPI void sendActorCreated(class Actor&, ::ActorInitializationMethod);

    MCAPI void sendActorCreationAttemptFailed(class Actor& actor, std::string_view reason);

    MCAPI void sendActorSneakChanged(class Actor& actor, bool isSneaking);

    MCAPI void sendActorStartRiding(class Actor& actor, class Actor&);

    MCAPI void sendActorStopRiding(class Actor& actor, bool, bool actorIsBeingDestroyed, bool);

    MCAPI void sendActorTargetAcquired(class Actor& actor, class Actor& target);

    MCAPI void sendActorTeleported(class Actor& actor);

    MCAPI void sendActorTick(class Actor& actor);

    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct ActorGameplayEvent<::CoordinatorResult>> const& event);

    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct MutableActorGameplayEvent<::CoordinatorResult>> event);

    MCAPI void sendEvent(class EventRef<struct ActorGameplayEvent<void>> const& event);

    MCAPI void sendServerPlayerAuthInputApplied(class Player&);

    MCAPI void sendServerPlayerAuthInputReceived(class Player&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onGameplayUserAdded(class EntityContext&);

    // NOLINTEND
};
