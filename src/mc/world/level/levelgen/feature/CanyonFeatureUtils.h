#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/TerrainGenVersion.h"

// auto generated forward declare list
// clang-format off
namespace CanyonFeatureUtils { struct CanyonConfiguration; }
// clang-format on

namespace CanyonFeatureUtils {

struct CanyonConfiguration {
    TerrainGenVersion version;
    int               minHeight;
};
// NOLINTBEGIN
// symbol: ?getCurrentConfiguration@CanyonFeatureUtils@@YAAEBUCanyonConfiguration@1@W4TerrainGenVersion@1@@Z
MCAPI struct CanyonFeatureUtils::CanyonConfiguration const&
    getCurrentConfiguration(::CanyonFeatureUtils::TerrainGenVersion);
// NOLINTEND

}; // namespace CanyonFeatureUtils
