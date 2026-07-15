#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/PointLightLODingParameters.h"

struct PointLightLODingConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::PointLightLODingParameters> mLow;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::PointLightLODingParameters> mMedium;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::PointLightLODingParameters> mHigh;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::PointLightLODingParameters> mUltra;
    // NOLINTEND
};
