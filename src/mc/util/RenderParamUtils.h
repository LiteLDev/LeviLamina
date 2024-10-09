#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RenderParamUtils {
// NOLINTBEGIN
MCAPI void fillRenderParamsWithSourceContextBlockAtPosBlockSourceAndActor(
    class RenderParams&   params,
    class BlockSource&    region,
    class BlockPos const& pos,
    class Actor*          actor
);

MCAPI void fillRenderParamsWithSourceContextItemActorAndActorTarget(
    class RenderParams& params,
    class ItemStack&    item,
    class Actor&        actor
);
// NOLINTEND

}; // namespace RenderParamUtils
