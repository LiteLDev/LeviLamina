#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/canyon_feature_utils/TerrainGenVersion.h"

namespace CanyonFeatureUtils {

struct CanyonConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CanyonFeatureUtils::TerrainGenVersion> version;
    ::ll::TypedStorage<4, 4, int>                                     minHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    CanyonConfiguration& operator=(CanyonConfiguration const&);
    CanyonConfiguration(CanyonConfiguration const&);
    CanyonConfiguration();
};

} // namespace CanyonFeatureUtils
