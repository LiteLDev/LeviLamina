#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

struct PointLightLODingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mBlockLightAmbientLightIntensity_BeforeDiffuseFadeOut;
    ::ll::TypedStorage<4, 4, float> mBlockLightAmbientLightIntensity_AfterDiffuseFadeOut;
    ::ll::TypedStorage<4, 4, float> mDistanceFromCamera_StartDiffuseFadeOut;
    ::ll::TypedStorage<4, 4, float> mDistanceFromCamera_EndDiffuseFadeOut;
    ::ll::TypedStorage<4, 4, float> mDistanceFromCamera_StartSpecularFadeOut;
    ::ll::TypedStorage<4, 4, float> mDistanceFromCamera_EndSpecularFadeOut;
    ::ll::TypedStorage<1, 1, bool>  mEnableFadeOutPointLightDiffuse;
    ::ll::TypedStorage<1, 1, bool>  mEnableFadeOutPointLightSpecular;
    ::ll::TypedStorage<4, 4, int>   mLightUpdateFrequency;
    // NOLINTEND
};

} // namespace dragon::framerenderer
