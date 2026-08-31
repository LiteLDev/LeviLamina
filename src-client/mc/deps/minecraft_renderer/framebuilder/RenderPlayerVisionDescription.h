#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct RenderPlayerVisionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mNightVisionEnabled;
    ::ll::TypedStorage<4, 4, float> mNightVisionScale;
    ::ll::TypedStorage<4, 4, float> mMobEffectFogLevel;
    ::ll::TypedStorage<4, 4, float> mSkyAmbientContribution;
    ::ll::TypedStorage<4, 4, float> mDarknessScale;
    // NOLINTEND
};

} // namespace mce::framebuilder
