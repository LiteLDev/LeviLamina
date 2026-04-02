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
    ::ll::TypedStorage<8, 56, ::dragon::framerenderer::PointLightLODingParameters> mLow;
    ::ll::TypedStorage<8, 56, ::dragon::framerenderer::PointLightLODingParameters> mMedium;
    ::ll::TypedStorage<8, 56, ::dragon::framerenderer::PointLightLODingParameters> mHigh;
    ::ll::TypedStorage<8, 56, ::dragon::framerenderer::PointLightLODingParameters> mUltra;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PointLightLODingConfiguration();

    MCAPI PointLightLODingConfiguration(::PointLightLODingConfiguration const&);

    MCAPI ::PointLightLODingConfiguration& operator=(::PointLightLODingConfiguration const&);

    MCAPI ~PointLightLODingConfiguration();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::PointLightLODingConfiguration const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
