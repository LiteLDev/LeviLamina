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
MCNAPI int aboveBottomHandler(::br::worldgen::WorldGenContext const& heightAccessor, int v);
#endif

#ifdef LL_PLAT_C
MCNAPI int aboveBottomHandler(::br::worldgen::WorldGenContext const& heightAccessor, int v);
#endif

#ifdef LL_PLAT_S
MCNAPI int absoluteHandler(::br::worldgen::WorldGenContext const&, int v);
#endif

#ifdef LL_PLAT_C
MCNAPI int absoluteHandler(::br::worldgen::WorldGenContext const&, int v);
#endif

#ifdef LL_PLAT_S
MCNAPI int belowTopHandler(::br::worldgen::WorldGenContext const& heightAccessor, int v);
#endif

#ifdef LL_PLAT_C
MCNAPI int belowTopHandler(::br::worldgen::WorldGenContext const& heightAccessor, int v);
#endif

#ifdef LL_PLAT_S
MCNAPI int seaLevelHandler(::br::worldgen::WorldGenContext const& heightAccessor, int v);
#endif

#ifdef LL_PLAT_C
MCNAPI int seaLevelHandler(::br::worldgen::WorldGenContext const& heightAccessor, int v);
#endif
// NOLINTEND

} // namespace br::worldgen::VerticalAnchorUtils
