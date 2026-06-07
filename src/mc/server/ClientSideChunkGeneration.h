#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
class IOptionsReader;
// clang-format on

namespace ClientSideChunkGeneration {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI uchar getMaxChunkBuildRadius(::IOptionsReader const& clientOptions);
#endif

MCNAPI uchar getMaxChunkBuildRadius(::Player const& player);

MCNAPI float getOptimalServerChunkBuildRadiusRatio(uchar clientMaxBuildRadius, uchar serverMaxBuildRadius);
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI uchar const& LowTierRadiusThreshold();
#endif

MCNAPI ::std::optional<float>& ServerBuildRatioOverride();
// NOLINTEND

} // namespace ClientSideChunkGeneration
