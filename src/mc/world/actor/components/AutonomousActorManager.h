#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"

class AutonomousActorManager {
public:
    // prevent constructor by default
    AutonomousActorManager& operator=(AutonomousActorManager const&);
    AutonomousActorManager(AutonomousActorManager const&);
    AutonomousActorManager();

public:
    // NOLINTBEGIN
    MCAPI explicit AutonomousActorManager(class WeakRef<class EntityRegistry>);

    MCAPI class Actor* addAutonomousActorEntity(class Dimension&, class OwnerPtr<class EntityContext>);

    MCAPI class Actor*
    addAutonomousActorEntity(class IAddActorEntityProxy&, class OwnerPtr<class EntityContext> entity);

    MCAPI bool hasOwnedInactiveAutonomousActorWithUniqueID(struct ActorUniqueID actorUniqueID) const;

    MCAPI void initializeWithActorManager(gsl::not_null<class StackRefResult<class ActorManager>> const&);

    MCAPI void loadAutonomousActorsFromDisk(class LevelStorage&, class ActorFactory&);

    MCAPI void onLevelTearingDown();

    MCAPI void registerForLevelChunkEvents(class ILevelChunkEventManagerConnector&);

    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager&);

    MCAPI ~AutonomousActorManager();

    MCAPI static std::string_view const AUTONOMOUS_ACTOR_KEY;

    MCAPI static std::string_view const AUTONOMOUS_ACTOR_LIST_KEY;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _moveActiveAutonomousActorEntityToInactive(class Actor& actor, class LevelChunk& levelChunk);

    MCAPI void _onChunkDiscarded(class LevelChunk&);

    MCAPI void _onRemoveActorEntityReferences(class Actor& actor);

    MCAPI void _saveAllAutonomousActors(class LevelStorage& levelStorage);

    MCAPI static void _deduplicateDuplicateActorsFromList(class ListTag&);

    // NOLINTEND
};
