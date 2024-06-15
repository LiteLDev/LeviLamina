#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RenderParamUtils {
// NOLINTBEGIN
// symbol:
// ?fillRenderParamsWithSourceContextBlockAtPosBlockSourceAndActor@RenderParamUtils@@YAXAEAVRenderParams@@AEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
MCAPI void
fillRenderParamsWithSourceContextBlockAtPosBlockSourceAndActor(class RenderParams&, class BlockSource&, class BlockPos const&, class Actor*);

// symbol:
// ?fillRenderParamsWithSourceContextItemActorAndActorTarget@RenderParamUtils@@YAXAEAVRenderParams@@AEAVItemStack@@AEAVActor@@@Z
MCAPI void
fillRenderParamsWithSourceContextItemActorAndActorTarget(class RenderParams&, class ItemStack&, class Actor&);
// NOLINTEND

}; // namespace RenderParamUtils
