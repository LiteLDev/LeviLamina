#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/IActorDimensionTransferProxy.h"

class ActorDimensionTransferProxy : public ::IActorDimensionTransferProxy {
public:
    // prevent constructor by default
    ActorDimensionTransferProxy& operator=(ActorDimensionTransferProxy const&);
    ActorDimensionTransferProxy(ActorDimensionTransferProxy const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorDimensionTransferProxy@@UEAA@XZ
    virtual ~ActorDimensionTransferProxy() = default;

    // vIndex: 1, symbol: ?transferTickingArea@ActorDimensionTransferProxy@@UEBAXAEAVActor@@AEAVDimension@@@Z
    virtual void transferTickingArea(class Actor&, class Dimension&) const;

    // vIndex: 2, symbol: ?removeActorFromLevelChunk@ActorDimensionTransferProxy@@UEBAXAEAVActor@@@Z
    virtual void removeActorFromLevelChunk(class Actor&) const;

    // vIndex: 3, symbol:
    // ?transferActorToDimension@ActorDimensionTransferProxy@@UEBAXAEBVActor@@AEAVDimension@@AEBVVec3@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@_N@Z
    virtual void transferActorToDimension(
        class Actor const&,
        class Dimension&,
        class Vec3 const&,
        std::unique_ptr<class CompoundTag>,
        bool
    ) const;

    // symbol: ??0ActorDimensionTransferProxy@@QEAA@XZ
    MCAPI ActorDimensionTransferProxy();

    // NOLINTEND
};
