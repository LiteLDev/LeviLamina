#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IActorDimensionTransferProxy.h"

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
    virtual void transferTickingArea(class Actor& actor, class Dimension& dimension) const;

    // vIndex: 2
    virtual void removeActorFromLevelChunk(class Actor& actor) const;

    // vIndex: 3
    virtual void transferActorToDimension(
        class Actor const&                 actor,
        class Dimension&                   dimension,
        class Vec3 const&                  targetPosition,
        std::unique_ptr<class CompoundTag> saveTag,
        bool                               usePortal
    ) const;

    MCAPI ActorDimensionTransferProxy();

    // NOLINTEND
};
