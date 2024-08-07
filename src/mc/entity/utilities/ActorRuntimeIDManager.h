#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class ActorRuntimeIDManager {
public:
    // prevent constructor by default
    ActorRuntimeIDManager& operator=(ActorRuntimeIDManager const&);
    ActorRuntimeIDManager(ActorRuntimeIDManager const&);
    ActorRuntimeIDManager();

public:
    // NOLINTBEGIN
    MCAPI explicit ActorRuntimeIDManager(gsl::not_null<class StackRefResult<class GameplayUserManager>>);

    MCAPI void addRuntimeActorEntity(class ActorRuntimeID, class WeakEntityRef entityRef);

    MCAPI class ActorRuntimeID getNextRuntimeID();

    MCAPI class Actor* getRuntimeActorEntity(class ActorRuntimeID actorId, bool getRemoved) const;

    MCAPI std::vector<class Actor*> getRuntimeActorList() const;

    MCAPI void initialize(class ActorManager&);

    MCAPI void removeRuntimeActorEntity(class ActorRuntimeID);

    MCAPI ~ActorRuntimeIDManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addEntity(class EntityContext const& entity);

    MCAPI void _onActorAdded(class Actor& actor);

    MCAPI void _onRemoveActorEntityReferences(class Actor& actor);

    MCAPI void _removeEntity(class EntityContext const& entity);

    // NOLINTEND
};
