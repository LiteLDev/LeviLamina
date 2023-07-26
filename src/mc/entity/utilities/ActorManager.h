#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ActorManager {

public:
    // prevent constructor by default
    ActorManager& operator=(ActorManager const&) = delete;
    ActorManager(ActorManager const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorManager(); // NOLINT
#endif
    /**
     * @symbol ??0ActorManager\@\@QEAA\@XZ
     */
    MCAPI ActorManager(); // NOLINT
    /**
     * @symbol
     * ?addActorEntity\@ActorManager\@\@QEAAPEAVActor\@\@AEAVIAddActorEntityProxy\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI class Actor* addActorEntity(class IAddActorEntityProxy&, class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol
     * ?addActorEntity\@ActorManager\@\@QEAAPEAVActor\@\@AEAVDimension\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI class Actor* addActorEntity(class Dimension&, class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol
     * ?cleanupActorEntityReferencesGarbageCollect\@ActorManager\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void cleanupActorEntityReferencesGarbageCollect(class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol
     * ?cleanupRemovedActorEntityReferencesGarbageCollect\@ActorManager\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void cleanupRemovedActorEntityReferencesGarbageCollect(class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol
     * ?deleteActorEntityFromWorldAndTakeEntity\@ActorManager\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> deleteActorEntityFromWorldAndTakeEntity(class WeakEntityRef
    ); // NOLINT
    /**
     * @symbol ?forceRemoveActor\@ActorManager\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void forceRemoveActor(class Actor&); // NOLINT
    /**
     * @symbol ?forceRemoveActorFromWorld\@ActorManager\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void forceRemoveActorFromWorld(class Actor&); // NOLINT
    /**
     * @symbol
     * ?getEntities\@ActorManager\@\@QEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const& getEntities() const; // NOLINT
    /**
     * @symbol
     * ?initializeWithActorGarbageCollector\@ActorManager\@\@QEAAXV?$not_null\@V?$NonOwnerPointer\@VActorGarbageCollector\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI void
        initializeWithActorGarbageCollector(class gsl::not_null<
                                            class Bedrock::NonOwnerPointer<class ActorGarbageCollector>>); // NOLINT
    /**
     * @symbol
     * ?initializeWithProxy\@ActorManager\@\@QEAAXV?$unique_ptr\@VIActorManagerProxy\@\@U?$default_delete\@VIActorManagerProxy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void initializeWithProxy(std::unique_ptr<class IActorManagerProxy>); // NOLINT
    /**
     * @symbol ?onChunkDiscarded\@ActorManager\@\@QEAAXVWeakEntityRef\@\@\@Z
     */
    MCAPI void onChunkDiscarded(class WeakEntityRef); // NOLINT
    /**
     * @symbol
     * ?registerActorEntityAddedCallback\@ActorManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerActorEntityAddedCallback(class std::function<void(class Actor&)>); // NOLINT
    /**
     * @symbol
     * ?registerOnRemoveActorEntityReferences\@ActorManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerOnRemoveActorEntityReferences(class std::function<void(class Actor&)>); // NOLINT
    /**
     * @symbol
     * ?registerPostReloadActor\@ActorManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerPostReloadActor(class std::function<void(class Actor&)>); // NOLINT
    /**
     * @symbol
     * ?removeActorEntityAndTakeEntity\@ActorManager\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> removeActorEntityAndTakeEntity(class WeakEntityRef); // NOLINT
    /**
     * @symbol ?removeActorEntityReferencesForDeletion\@ActorManager\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void removeActorEntityReferencesForDeletion(class Actor&); // NOLINT
    /**
     * @symbol ?removeEntity\@ActorManager\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> removeEntity(class WeakEntityRef); // NOLINT
    /**
     * @symbol ?setLevelIsTearingDown\@ActorManager\@\@QEAAXXZ
     */
    MCAPI void setLevelIsTearingDown(); // NOLINT
    /**
     * @symbol
     * ?takeEntity\@ActorManager\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@AEAVLevelChunk\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> takeEntity(class WeakEntityRef, class LevelChunk&); // NOLINT
};
