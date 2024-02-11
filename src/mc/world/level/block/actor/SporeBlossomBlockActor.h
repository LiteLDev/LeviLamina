#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class SporeBlossomBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    SporeBlossomBlockActor& operator=(SporeBlossomBlockActor const&);
    SporeBlossomBlockActor(SporeBlossomBlockActor const&);
    SporeBlossomBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SporeBlossomBlockActor@@UEAA@XZ
    virtual ~SporeBlossomBlockActor() = default;

    // vIndex: 7, symbol: ?tick@SporeBlossomBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // symbol: ??0SporeBlossomBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit SporeBlossomBlockActor(class BlockPos const& pos);

    // NOLINTEND
};
