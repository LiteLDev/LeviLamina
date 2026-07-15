#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen::VerticalAnchorUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCFOLD int absoluteHandler(::br::worldgen::WorldGenContext const&, int v);
#endif

#ifdef LL_PLAT_C
MCFOLD int absoluteHandler(::br::worldgen::WorldGenContext const&, int v);
#endif
// NOLINTEND

} // namespace br::worldgen::VerticalAnchorUtils
