#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

class AutonomousActorManager {
public:
    // prevent constructor by default
    AutonomousActorManager& operator=(AutonomousActorManager const&);
    AutonomousActorManager(AutonomousActorManager const&);
    AutonomousActorManager();

public:
    // NOLINTBEGIN
    MCAPI explicit AutonomousActorManager(class WeakRef<class EntityRegistry> entityRegistry);

    MCAPI class Actor* addAutonomousActorEntity(class Dimension& dimension, class OwnerPtr<class EntityContext> entity);

    MCAPI class Actor* addAutonomousActorEntity(
        class IAddActorEntityProxy&         addActorEntityProxy,
        class OwnerPtr<class EntityContext> entity
    );

    MCAPI bool hasOwnedInactiveAutonomousActorWithUniqueID(struct ActorUniqueID actorUniqueID) const;

    MCAPI void initializeWithActorManager(gsl::not_null<class StackRefResult<class ActorManager>> const& actorManager);

    MCAPI void loadAutonomousActorsFromDisk(class LevelStorage& levelStorage, class ActorFactory& actorFactory);

    MCAPI void onLevelTearingDown();

    MCAPI void registerForLevelChunkEvents(class ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager& levelStorageManager);

    MCAPI ~AutonomousActorManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _moveActiveAutonomousActorEntityToInactive(class Actor& actor, class LevelChunk& levelChunk);

    MCAPI void _onChunkDiscarded(class LevelChunk& levelChunk);

    MCAPI void _onRemoveActorEntityReferences(class Actor& actor);

    MCAPI void _saveAllAutonomousActors(class LevelStorage& levelStorage);

    MCAPI static void _deduplicateDuplicateActorsFromList(class ListTag& listTag);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class WeakRef<class EntityRegistry> entityRegistry);

    MCAPI void dtor$();

    MCAPI static std::string_view const& AUTONOMOUS_ACTOR_KEY();

    MCAPI static std::string_view const& AUTONOMOUS_ACTOR_LIST_KEY();

    // NOLINTEND
};
