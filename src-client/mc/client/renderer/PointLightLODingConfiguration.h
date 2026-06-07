#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/PointLightLODingQuality.h"
#include "mc/external/render_dragon/frame_renderer/PointLightLODingParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct PointLightLODingConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::PointLightLODingParameters> mLow;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::PointLightLODingParameters> mMedium;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::PointLightLODingParameters> mHigh;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::PointLightLODingParameters> mUltra;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::dragon::framerenderer::PointLightLODingParameters
    getPointLightLODingParameters(::PointLightLODingQuality quality) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
