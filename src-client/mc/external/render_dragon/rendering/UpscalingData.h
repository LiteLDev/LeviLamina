#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/FidelityFXPrecision.h"
#include "mc/external/render_dragon/frame_renderer/modules/UpscalingParameters.h"

namespace dragon::rendering {

class UpscalingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> mUpscalingParameters;
    ::ll::TypedStorage<4, 4, uint>                                                   mCurrentJitterIdx;
    ::ll::TypedStorage<4, 4, float>                                                  mDynamicResolutionScale;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UpscalingData();

    MCAPI float getDynamicResolutionScale() const;

    MCFOLD bool getEnableColorClipping() const;

    MCFOLD bool getEnableMotionVectorFiltering() const;

    MCFOLD ::dragon::framerenderer::modules::fidelityfx::FidelityFXPrecision getFSRPrecisionMode() const;

    MCFOLD bool getFSRSharpeningEnabled() const;

    MCFOLD float getFSRSharpness() const;

    MCFOLD float getMinDynamicResolutionScale() const;

    MCFOLD float getPixelScalingFactor() const;

    MCFOLD float getSmoothingAlpha() const;

    MCAPI ::glm::vec2 const& getSubPixelJitterOffset() const;

    MCFOLD float getTargetFrameRate() const;

    MCFOLD float getUpscalingFactor() const;

    MCFOLD ::dragon::framerenderer::modules::UpscalingParameters::Mode const getUpscalingMode() const;

    MCFOLD ::glm::vec2 const& getVarianceClippingBiasMaxMin() const;

    MCFOLD bool isDynamicResolutionEnabled() const;

    MCFOLD bool isFSRComputeEnabled() const;

    MCAPI bool isUpscalingEnabled() const;

    MCAPI void setUpscalingParameters(::dragon::framerenderer::modules::UpscalingParameters const& params);

    MCAPI void updateFrameTick(float dynamicResolutionScale);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace dragon::rendering
