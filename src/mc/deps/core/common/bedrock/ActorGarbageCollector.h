#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ActorGarbageCollector : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ActorGarbageCollector& operator=(ActorGarbageCollector const&);
    ActorGarbageCollector(ActorGarbageCollector const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorGarbageCollector@@UEAA@XZ
    virtual ~ActorGarbageCollector();

    // symbol: ??0ActorGarbageCollector@@QEAA@XZ
    MCAPI ActorGarbageCollector();

    // symbol: ?clearChunkDiscardedEntities@ActorGarbageCollector@@QEAAXXZ
    MCAPI void clearChunkDiscardedEntities();

    // symbol: ?clearPendingEntities@ActorGarbageCollector@@QEAAXXZ
    MCAPI void clearPendingEntities();

    // symbol: ?garbageCollectEntity@ActorGarbageCollector@@QEAAXV?$OwnerPtrT@UEntityRefTraits@@@@@Z
    MCAPI void garbageCollectEntity(class OwnerPtrT<struct EntityRefTraits>);

    // symbol: ?garbageCollectEntityWhenChunkDiscarded@ActorGarbageCollector@@QEAAXV?$OwnerPtrT@UEntityRefTraits@@@@@Z
    MCAPI void garbageCollectEntityWhenChunkDiscarded(class OwnerPtrT<struct EntityRefTraits>);

    // symbol: ?update@ActorGarbageCollector@@QEAAXXZ
    MCAPI void update();

    // NOLINTEND
};
