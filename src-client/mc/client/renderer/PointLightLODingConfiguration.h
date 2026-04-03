#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/PointLightLODingParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct PointLightLODingConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 32, ::dragon::framerenderer::PointLightLODingParameters> mLow;
    ::ll::TypedStorage<4, 32, ::dragon::framerenderer::PointLightLODingParameters> mMedium;
    ::ll::TypedStorage<4, 32, ::dragon::framerenderer::PointLightLODingParameters> mHigh;
    ::ll::TypedStorage<4, 32, ::dragon::framerenderer::PointLightLODingParameters> mUltra;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
