#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class SporeBlossomBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    SporeBlossomBlockActor& operator=(SporeBlossomBlockActor const&);
    SporeBlossomBlockActor(SporeBlossomBlockActor const&);
    SporeBlossomBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SporeBlossomBlockActor() = default;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    MCAPI explicit SporeBlossomBlockActor(class BlockPos const& pos);

    // NOLINTEND
};
