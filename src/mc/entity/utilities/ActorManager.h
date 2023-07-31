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
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorManager();
#endif
    /**
     * @symbol ??0ActorManager\@\@QEAA\@XZ
     */
    MCAPI ActorManager();
    /**
     * @symbol
     * ?addActorEntity\@ActorManager\@\@QEAAPEAVActor\@\@AEAVIAddActorEntityProxy\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI class Actor* addActorEntity(class IAddActorEntityProxy&, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol
     * ?addActorEntity\@ActorManager\@\@QEAAPEAVActor\@\@AEAVDimension\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI class Actor* addActorEntity(class Dimension&, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol
     * ?cleanupActorEntityReferencesGarbageCollect\@ActorManager\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void cleanupActorEntityReferencesGarbageCollect(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol
     * ?cleanupRemovedActorEntityReferencesGarbageCollect\@ActorManager\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void cleanupRemovedActorEntityReferencesGarbageCollect(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol
     * ?deleteActorEntityFromWorldAndTakeEntity\@ActorManager\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> deleteActorEntityFromWorldAndTakeEntity(class WeakEntityRef);
    /**
     * @symbol ?forceRemoveActor\@ActorManager\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void forceRemoveActor(class Actor&);
    /**
     * @symbol ?forceRemoveActorFromWorld\@ActorManager\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void forceRemoveActorFromWorld(class Actor&);
    /**
     * @symbol
     * ?getEntities\@ActorManager\@\@QEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const& getEntities() const;
    /**
     * @symbol
     * ?initializeWithActorGarbageCollector\@ActorManager\@\@QEAAXV?$not_null\@V?$NonOwnerPointer\@VActorGarbageCollector\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI void initializeWithActorGarbageCollector(class gsl::not_null<
                                                   class Bedrock::NonOwnerPointer<class ActorGarbageCollector>>);
    /**
     * @symbol
     * ?initializeWithProxy\@ActorManager\@\@QEAAXV?$unique_ptr\@VIActorManagerProxy\@\@U?$default_delete\@VIActorManagerProxy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void initializeWithProxy(std::unique_ptr<class IActorManagerProxy>);
    /**
     * @symbol ?onChunkDiscarded\@ActorManager\@\@QEAAXVWeakEntityRef\@\@\@Z
     */
    MCAPI void onChunkDiscarded(class WeakEntityRef);
    /**
     * @symbol
     * ?registerActorEntityAddedCallback\@ActorManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerActorEntityAddedCallback(std::function<void(class Actor&)>);
    /**
     * @symbol
     * ?registerOnRemoveActorEntityReferences\@ActorManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnRemoveActorEntityReferences(std::function<void(class Actor&)>);
    /**
     * @symbol
     * ?registerPostReloadActor\@ActorManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerPostReloadActor(std::function<void(class Actor&)>);
    /**
     * @symbol
     * ?removeActorEntityAndTakeEntity\@ActorManager\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> removeActorEntityAndTakeEntity(class WeakEntityRef);
    /**
     * @symbol ?removeActorEntityReferencesForDeletion\@ActorManager\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void removeActorEntityReferencesForDeletion(class Actor&);
    /**
     * @symbol ?removeEntity\@ActorManager\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> removeEntity(class WeakEntityRef);
    /**
     * @symbol ?setLevelIsTearingDown\@ActorManager\@\@QEAAXXZ
     */
    MCAPI void setLevelIsTearingDown();
    /**
     * @symbol
     * ?takeEntity\@ActorManager\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@AEAVLevelChunk\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> takeEntity(class WeakEntityRef, class LevelChunk&);
    // NOLINTEND
};
