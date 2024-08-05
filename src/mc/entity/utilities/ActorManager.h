#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"

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

    MCAPI class Actor* addActorEntity(class Dimension&, class OwnerPtr<class EntityContext>);

    MCAPI class Actor* addActorEntity(class IAddActorEntityProxy&, class OwnerPtr<class EntityContext> entity);

    MCAPI class Actor* addGlobalActorEntity(class Dimension&, class OwnerPtr<class EntityContext>);

    MCAPI void cleanupActorEntityReferencesGarbageCollect(class OwnerPtr<class EntityContext>);

    MCAPI void cleanupRemovedActorEntityReferencesGarbageCollect(class OwnerPtr<class EntityContext>);

    MCAPI class OwnerPtr<class EntityContext> deleteActorEntityFromWorldAndTakeEntity(class WeakEntityRef entityRef);

    MCAPI void forceRemoveActor(class Actor& actor);

    MCAPI void forceRemoveActorFromWorld(class Actor& actor);

    MCAPI std::vector<class OwnerPtr<class EntityContext>> const& getEntities() const;

    MCAPI void
    initializeWithActorGarbageCollector(gsl::not_null<class StackRefResult<class ActorGarbageCollector>> const&);

    MCAPI void initializeWithProxy(std::unique_ptr<class IActorManagerProxy>);

    MCAPI void onChunkDiscarded(class WeakEntityRef entityRef);

    MCAPI class Bedrock::PubSub::Subscription
    registerActorEntityAddedCallback(std::function<void(class Actor&)> callback);

    MCAPI void registerForLevelChunkEvents(class ILevelChunkEventManagerConnector&);

    MCAPI class Bedrock::PubSub::Subscription
    registerOnRemoveActorEntityReferences(std::function<void(class Actor&)> callback);

    MCAPI class Bedrock::PubSub::Subscription
        registerPostReloadActor(std::function<void(class Actor&, ::ActorInitializationMethod)>);

    MCAPI class OwnerPtr<class EntityContext> removeActorEntityAndTakeEntity(class WeakEntityRef entityRef);

    MCAPI void removeActorEntityReferencesForDeletion(class Actor& actor);

    MCAPI class OwnerPtr<class EntityContext> removeEntity(class WeakEntityRef entityRef);

    MCAPI void setLevelIsTearingDown();

    MCAPI class OwnerPtr<class EntityContext> takeEntity(class WeakEntityRef entityRef, class LevelChunk& levelChunk);

    MCAPI ~ActorManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onChunkDiscarded(class LevelChunk&);

    MCAPI void _removeActorEntityReferences(class Actor& actor);

    // NOLINTEND
};
