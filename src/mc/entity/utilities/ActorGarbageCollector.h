#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"

class ActorGarbageCollector {

public:
    // prevent constructor by default
    ActorGarbageCollector& operator=(ActorGarbageCollector const&) = delete;
    ActorGarbageCollector(ActorGarbageCollector const&)            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORGARBAGECOLLECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorGarbageCollector();
#endif
    /**
     * @symbol ??0ActorGarbageCollector\@\@QEAA\@XZ
     */
    MCAPI ActorGarbageCollector();
    /**
     * @symbol ?clearChunkDiscardedEntities\@ActorGarbageCollector\@\@QEAAXXZ
     */
    MCAPI void clearChunkDiscardedEntities();
    /**
     * @symbol ?clearPendingEntities\@ActorGarbageCollector\@\@QEAAXXZ
     */
    MCAPI void clearPendingEntities();
    /**
     * @symbol ?garbageCollectEntity\@ActorGarbageCollector\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void garbageCollectEntity(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol ?update\@ActorGarbageCollector\@\@QEAAXXZ
     */
    MCAPI void update();
    // NOLINTEND
};
