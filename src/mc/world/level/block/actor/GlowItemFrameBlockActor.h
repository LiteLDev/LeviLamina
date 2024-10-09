#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/ItemFrameBlockActor.h"

class GlowItemFrameBlockActor : public ::ItemFrameBlockActor {
public:
    // prevent constructor by default
    GlowItemFrameBlockActor& operator=(GlowItemFrameBlockActor const&);
    GlowItemFrameBlockActor(GlowItemFrameBlockActor const&);
    GlowItemFrameBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GlowItemFrameBlockActor() = default;

    MCAPI explicit GlowItemFrameBlockActor(class BlockPos pos);

    // NOLINTEND
};
