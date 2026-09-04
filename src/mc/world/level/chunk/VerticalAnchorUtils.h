#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen::VerticalAnchorUtils {
// functions
// NOLINTBEGIN
MCAPI int aboveBottomHandler(::br::worldgen::WorldGenContext const& heightAccessor, int v);

#ifdef LL_PLAT_S
MCFOLD int absoluteHandler(::br::worldgen::WorldGenContext const&, int v);
#endif

#ifdef LL_PLAT_C
MCFOLD int absoluteHandler(::br::worldgen::WorldGenContext const&, int v);
#endif

MCAPI int belowTopHandler(::br::worldgen::WorldGenContext const& heightAccessor, int v);

MCAPI int seaLevelHandler(::br::worldgen::WorldGenContext const& heightAccessor, int v);
// NOLINTEND

} // namespace br::worldgen::VerticalAnchorUtils
