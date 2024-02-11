#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/ItemFrameBlockActor.h"

class GlowItemFrameBlockActor : public ::ItemFrameBlockActor {
public:
    // prevent constructor by default
    GlowItemFrameBlockActor& operator=(GlowItemFrameBlockActor const&);
    GlowItemFrameBlockActor(GlowItemFrameBlockActor const&);
    GlowItemFrameBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GlowItemFrameBlockActor@@UEAA@XZ
    virtual ~GlowItemFrameBlockActor() = default;

    // symbol: ??0GlowItemFrameBlockActor@@QEAA@VBlockPos@@@Z
    MCAPI explicit GlowItemFrameBlockActor(class BlockPos pos);

    // NOLINTEND
};
