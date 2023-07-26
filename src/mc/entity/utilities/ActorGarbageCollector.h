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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORGARBAGECOLLECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorGarbageCollector(); // NOLINT
#endif
    /**
     * @symbol ??0ActorGarbageCollector\@\@QEAA\@XZ
     */
    MCAPI ActorGarbageCollector(); // NOLINT
    /**
     * @symbol ?clearChunkDiscardedEntities\@ActorGarbageCollector\@\@QEAAXXZ
     */
    MCAPI void clearChunkDiscardedEntities(); // NOLINT
    /**
     * @symbol ?clearPendingEntities\@ActorGarbageCollector\@\@QEAAXXZ
     */
    MCAPI void clearPendingEntities(); // NOLINT
    /**
     * @symbol ?garbageCollectEntity\@ActorGarbageCollector\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void garbageCollectEntity(class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?update\@ActorGarbageCollector\@\@QEAAXXZ
     */
    MCAPI void update(); // NOLINT
};
