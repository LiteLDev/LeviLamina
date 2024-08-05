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
    // vIndex: 0
    virtual ~ActorDimensionTransferProxy() = default;

    // vIndex: 1
    virtual void transferTickingArea(class Actor&, class Dimension&) const;

    // vIndex: 2
    virtual void removeActorFromLevelChunk(class Actor&) const;

    // vIndex: 3
    virtual void transferActorToDimension(
        class Actor const&,
        class Dimension&,
        class Vec3 const&,
        std::unique_ptr<class CompoundTag>,
        bool
    ) const;

    MCAPI ActorDimensionTransferProxy();

    // NOLINTEND
};
