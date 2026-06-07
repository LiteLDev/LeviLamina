#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockRenderLayer.h"

namespace BlockRenderLayerUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI bool isAlphaTest(::BlockRenderLayer layer, bool isSimpleGraphicsMode);

MCNAPI bool isBlend(::BlockRenderLayer layer);
#endif

MCNAPI bool isOpaque(::BlockRenderLayer layer);

#ifdef LL_PLAT_C
MCNAPI bool isShift(::BlockRenderLayer layer);

MCNAPI bool isSingleSide(::BlockRenderLayer layer);
#endif
// NOLINTEND

} // namespace BlockRenderLayerUtils
