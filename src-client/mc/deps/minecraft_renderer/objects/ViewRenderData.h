#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

struct ViewRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3>  mCameraPos;
    ::ll::TypedStorage<4, 12, ::glm::vec3>  mCameraTargetPos;
    ::ll::TypedStorage<4, 16, ::mce::Color> mFogColor;
    ::ll::TypedStorage<4, 16, ::mce::Color> mSkyColor;
    ::ll::TypedStorage<4, 16, ::mce::Color> mSkyZenithColor;
    ::ll::TypedStorage<4, 16, ::mce::Color> mSkyHorizonColor;
    ::ll::TypedStorage<4, 16, ::mce::Color> mSunriseColor;
    ::ll::TypedStorage<1, 1, bool>          mIsEndDimension;
    ::ll::TypedStorage<4, 4, float>         mFakeHDR;
    ::ll::TypedStorage<4, 4, float>         mMinParticleDistance;
    ::ll::TypedStorage<4, 4, float>         mRenderDistance;
    ::ll::TypedStorage<4, 4, float>         mSkyBrightnessScalar;
    ::ll::TypedStorage<1, 1, bool>          mCameraAboveClouds;
    ::ll::TypedStorage<1, 1, bool>          mCameraUnderLiquid;
    ::ll::TypedStorage<1, 1, bool>          mDrawClouds;
    ::ll::TypedStorage<1, 1, bool>          mDrawEntityEffects;
    ::ll::TypedStorage<1, 1, bool>          mDrawInsideCubes;
    ::ll::TypedStorage<1, 1, bool>          mDrawNameTags;
    ::ll::TypedStorage<1, 1, bool>          mDrawParticles;
    ::ll::TypedStorage<1, 1, bool>          mIsFancyRendering;
    ::ll::TypedStorage<1, 1, bool>          mDrawSky;
    ::ll::TypedStorage<1, 1, bool>          mDrawWeather;
    ::ll::TypedStorage<1, 1, bool>          mIsShadowPass;
    ::ll::TypedStorage<1, 1, bool>          mShowChunkMap;
    ::ll::TypedStorage<1, 1, bool>          mEnableDithering;
    // NOLINTEND
};
