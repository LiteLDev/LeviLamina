#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/feature/canyon_feature_utils/TerrainGenVersion.h"

namespace CanyonFeatureUtils {

struct CanyonConfiguration {
public:
    TerrainGenVersion version;
    int               minHeight;
};

}; // namespace CanyonFeatureUtils
