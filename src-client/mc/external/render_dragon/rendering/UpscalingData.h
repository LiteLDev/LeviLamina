#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    MCAPI float getDynamicResolutionScale() const;

    MCAPI void setUpscalingParameters(::dragon::framerenderer::modules::UpscalingParameters const& params);

    MCAPI void updateFrameTick(float dynamicResolutionScale);
    // NOLINTEND
};

} // namespace dragon::rendering
