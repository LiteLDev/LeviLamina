#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/PointLightParameters.h"
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"

namespace mce {

struct AnalyticalLight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::mce::PointLightParameters const>                        mParameters;
    ::ll::TypedStorage<8, 192, ::std::array<::dragon::atlas::AtlasTileHandle, 6> const> mAtlasTiles;
    // NOLINTEND
};

} // namespace mce
