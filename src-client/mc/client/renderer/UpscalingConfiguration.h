#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/UpscalingQuality.h"
#include "mc/external/render_dragon/frame_renderer/modules/UpscalingParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct UpscalingConfiguration {
public:
    // UpscalingConfiguration inner types declare
    // clang-format off
    struct Configs;
    // clang-format on

    // UpscalingConfiguration inner types define
    struct Configs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> automatic;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> oneThird;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> oneHalf;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> twoThirds;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> threeQuarters;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> native;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> taau;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> bilinear;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Configs();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 416, ::UpscalingConfiguration::Configs> mConfigs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::dragon::framerenderer::modules::UpscalingParameters
    getUpscalingParameters(::UpscalingQuality quality, ::glm::vec<2, ushort> const& targetResolution) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::dragon::framerenderer::modules::UpscalingParameters resolveAutomaticUpscalingParameters(
        ::dragon::framerenderer::modules::UpscalingParameters params,
        ::glm::vec2 const&                                    targetResolution
    );
    // NOLINTEND
};

// free functions
// NOLINTBEGIN
MCAPI bool operator==(::UpscalingConfiguration::Configs const&, ::UpscalingConfiguration::Configs const&);
// NOLINTEND
