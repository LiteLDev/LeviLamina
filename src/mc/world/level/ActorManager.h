#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ActorManager {
public:
    // prevent constructor by default
    ActorManager& operator=(ActorManager const&);
    ActorManager(ActorManager const&);

public:
    // NOLINTBEGIN
    MCAPI ActorManager();

    MCAPI class Actor* addActorEntity(class Dimension& dimension, class OwnerPtr<class EntityContext> entity);

    MCAPI class Actor*
    addActorEntity(class IAddActorEntityProxy& addActorEntityProxy, class OwnerPtr<class EntityContext> entity);

    MCAPI class Actor* addGlobalActorEntity(class Dimension& dimension, class OwnerPtr<class EntityContext> entity);

    MCAPI void cleanupActorEntityReferencesGarbageCollect(class OwnerPtr<class EntityContext> entity);

    MCAPI void cleanupRemovedActorEntityReferencesGarbageCollect(class OwnerPtr<class EntityContext> entity);

    MCAPI class OwnerPtr<class EntityContext> deleteActorEntityFromWorldAndTakeEntity(class WeakEntityRef entityRef);

    MCAPI void forceRemoveActor(class Actor& actor);

    MCAPI void forceRemoveActorFromWorld(class Actor& actor);

    MCAPI std::vector<class OwnerPtr<class EntityContext>> const& getEntities() const;

    MCAPI void initializeWithActorGarbageCollector(
        gsl::not_null<class StackRefResult<class ActorGarbageCollector>> const& actorGarbageCollector
    );

    MCAPI void initializeWithProxy(std::unique_ptr<class IActorManagerProxy> actorManagerProxy);

    MCAPI void onChunkDiscarded(class WeakEntityRef entityRef);

    MCAPI class Bedrock::PubSub::Subscription
    registerActorEntityAddedCallback(std::function<void(class Actor&)> callback);

    MCAPI void registerForLevelChunkEvents(class ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI class Bedrock::PubSub::Subscription
    registerOnRemoveActorEntityReferences(std::function<void(class Actor&)> callback);

    MCAPI class Bedrock::PubSub::Subscription
    registerPostReloadActor(std::function<void(class Actor&, ::ActorInitializationMethod)> callback);

    MCAPI class OwnerPtr<class EntityContext> removeActorEntityAndTakeEntity(class WeakEntityRef entityRef);

    MCAPI void removeActorEntityReferencesForDeletion(class Actor& actor);

    MCAPI class OwnerPtr<class EntityContext> removeEntity(class WeakEntityRef entityRef);

    MCAPI void setLevelIsTearingDown();

    MCAPI class OwnerPtr<class EntityContext> takeEntity(class WeakEntityRef entityRef, class LevelChunk& levelChunk);

    MCAPI ~ActorManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onChunkDiscarded(class LevelChunk& levelChunk);

    MCAPI void _removeActorEntityReferences(class Actor& actor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
