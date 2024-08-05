#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RenderParamUtils {
// NOLINTBEGIN
MCAPI void
fillRenderParamsWithSourceContextBlockAtPosBlockSourceAndActor(class RenderParams&, class BlockSource&, class BlockPos const&, class Actor*);

MCAPI void
fillRenderParamsWithSourceContextItemActorAndActorTarget(class RenderParams&, class ItemStack&, class Actor&);
// NOLINTEND

}; // namespace RenderParamUtils
