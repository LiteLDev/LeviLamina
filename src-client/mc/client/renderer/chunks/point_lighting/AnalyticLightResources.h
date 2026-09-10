#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"

namespace PointLighting {

struct AnalyticLightResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::std::array<::dragon::atlas::AtlasTileHandle, 6>> mAtlasTiles;
    ::ll::TypedStorage<4, 4, float>                                               mIntensityScalar;
    // NOLINTEND
};

} // namespace PointLighting
