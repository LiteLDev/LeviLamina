#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/FidelityFXPrecision.h"

namespace dragon::framerenderer::modules {

struct UpscalingParameters {
public:
    // UpscalingParameters inner types define
    enum class Mode : int {
        Taau              = 0,
        Bilinear          = 1,
        Fsr1              = 2,
        Fsr1DebugBilinear = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::modules::UpscalingParameters::Mode> mUpscalingMode;
    ::ll::TypedStorage<4, 4, float>                                                       mUpscalingFactor;
    ::ll::TypedStorage<1, 1, bool>                                                        mEnableDynamicResolution;
    ::ll::TypedStorage<1, 1, bool>                                                        mDynamicResolutionOverridden;
    ::ll::TypedStorage<4, 4, float>                                                       mDynamicResolutionOverride;
    ::ll::TypedStorage<4, 4, float>                                                       mMinUpscalingFactor;
    ::ll::TypedStorage<4, 4, float>                                                       mTargetFramerate;
    ::ll::TypedStorage<4, 4, float>                                                       mPixelScaling;
    ::ll::TypedStorage<4, 4, float>                                                       mSmoothingAlpha;
    ::ll::TypedStorage<4, 4, float>                                                       mFSRSharpness;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::modules::fidelityfx::FidelityFXPrecision> mFSRPrecision;
    ::ll::TypedStorage<1, 1, bool>                                                              mEnableFSRSharpening;
    ::ll::TypedStorage<1, 1, bool>                                                              mUseFSRCompute;
    ::ll::TypedStorage<1, 1, bool>                                                              mEnableColorClipping;
    ::ll::TypedStorage<1, 1, bool>        mEnableMotionVectorFiltering;
    ::ll::TypedStorage<4, 8, ::glm::vec2> mVarianceClippingBiasMinMax;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules
