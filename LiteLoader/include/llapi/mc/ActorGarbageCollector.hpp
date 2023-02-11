/**
 * @file  ActorGarbageCollector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ActorGarbageCollector {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORGARBAGECOLLECTOR
public:
    class ActorGarbageCollector& operator=(class ActorGarbageCollector const &) = delete;
    ActorGarbageCollector(class ActorGarbageCollector const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ActorGarbageCollector\@\@QEAA\@XZ
     */
    MCAPI ActorGarbageCollector();
    /**
     * @symbol  ?clearChunkDiscardedEntities\@ActorGarbageCollector\@\@QEAAXXZ
     */
    MCAPI void clearChunkDiscardedEntities();
    /**
     * @symbol  ?clearPendingEntities\@ActorGarbageCollector\@\@QEAAXXZ
     */
    MCAPI void clearPendingEntities();
    /**
     * @symbol  ?garbageCollectEntity\@ActorGarbageCollector\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void garbageCollectEntity(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?garbageCollectEntityWhenChunkDiscarded\@ActorGarbageCollector\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void garbageCollectEntityWhenChunkDiscarded(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?update\@ActorGarbageCollector\@\@QEAAXXZ
     */
    MCAPI void update();

};