/**
 * @file  ActorManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ActorManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMANAGER
public:
    class ActorManager& operator=(class ActorManager const &) = delete;
    ActorManager(class ActorManager const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ActorManager\@\@QEAA\@XZ
     */
    MCAPI ActorManager();
    /**
     * @symbol  ?addActorEntity\@ActorManager\@\@QEAAPEAVActor\@\@AEAVDimension\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI class Actor * addActorEntity(class Dimension &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?addActorEntity\@ActorManager\@\@QEAAPEAVActor\@\@AEAVIAddActorEntityProxy\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI class Actor * addActorEntity(class IAddActorEntityProxy &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?cleanupActorEntityReferencesGarbageCollect\@ActorManager\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void cleanupActorEntityReferencesGarbageCollect(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?cleanupRemovedActorEntityReferencesGarbageCollect\@ActorManager\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void cleanupRemovedActorEntityReferencesGarbageCollect(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?getEntities\@ActorManager\@\@QEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const & getEntities() const;
    /**
     * @symbol  ?initializeWithActorGarbageCollector\@ActorManager\@\@QEAAXV?$not_null\@V?$NonOwnerPointer\@VActorGarbageCollector\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI void initializeWithActorGarbageCollector(class gsl::not_null<class Bedrock::NonOwnerPointer<class ActorGarbageCollector>>);
    /**
     * @symbol  ?initializeWithProxy\@ActorManager\@\@QEAAXV?$unique_ptr\@VIActorManagerProxy\@\@U?$default_delete\@VIActorManagerProxy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void initializeWithProxy(std::unique_ptr<class IActorManagerProxy>);
    /**
     * @symbol  ?onChunkDiscarded\@ActorManager\@\@QEAAXVWeakEntityRef\@\@\@Z
     */
    MCAPI void onChunkDiscarded(class WeakEntityRef);
    /**
     * @symbol  ?registerActorEntityAddedCallback\@ActorManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerActorEntityAddedCallback(class std::function<void (class Actor &)>);
    /**
     * @symbol  ?registerOnRemoveActorEntityReferences\@ActorManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnRemoveActorEntityReferences(class std::function<void (class Actor &)>);
    /**
     * @symbol  ?registerPostReloadActor\@ActorManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerPostReloadActor(class std::function<void (class Actor &)>);
    /**
     * @symbol  ?removeActorEntityReferencesForDeletion\@ActorManager\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void removeActorEntityReferencesForDeletion(class Actor &);
    /**
     * @symbol  ?removeEntity\@ActorManager\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> removeEntity(class WeakEntityRef);
    /**
     * @symbol  ?setLevelIsTearingDown\@ActorManager\@\@QEAAXXZ
     */
    MCAPI void setLevelIsTearingDown();
    /**
     * @symbol  ?takeEntity\@ActorManager\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@AEAVLevelChunk\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> takeEntity(class WeakEntityRef, class LevelChunk &);

};