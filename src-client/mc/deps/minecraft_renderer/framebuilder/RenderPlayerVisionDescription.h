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

public:
    // prevent constructor by default
    RenderPlayerVisionDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RenderPlayerVisionDescription(
        bool  nightVisionEnabled,
        float nightVisionScale,
        float mobEffectFogLevel,
        float skyAmbientContribution,
        float darknessScale
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        bool  nightVisionEnabled,
        float nightVisionScale,
        float mobEffectFogLevel,
        float skyAmbientContribution,
        float darknessScale
    );
    // NOLINTEND
};

} // namespace mce::framebuilder
