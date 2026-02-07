#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/BrightnessPair.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/math/Vec4.h"

namespace ParticleSystem {

struct CommonParticle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                    mPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mVelocity;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mDirection;
    ::ll::TypedStorage<4, 4, float>                      mRotation;
    ::ll::TypedStorage<4, 4, float>                      mRotationSpeed;
    ::ll::TypedStorage<4, 8, ::Vec2>                     mRenderSize;
    ::ll::TypedStorage<4, 16, ::Vec2[2]>                 mUV;
    ::ll::TypedStorage<4, 4, float>                      mScale;
    ::ll::TypedStorage<4, 16, ::mce::Color>              mColor;
    ::ll::TypedStorage<1, 2, ::BrightnessPair>           mAmbientLighting;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mPositionPrev;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mVelocityPrev;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mDirectionPrev;
    ::ll::TypedStorage<4, 4, float>                      mRotationPrev;
    ::ll::TypedStorage<1, 1, bool>                       mDynamicPreviousDataValid;
    ::ll::TypedStorage<4, 8, ::Vec2>                     mRenderSizePrev;
    ::ll::TypedStorage<4, 4, float>                      mScalePrev;
    ::ll::TypedStorage<4, 16, ::mce::Color>              mColorPrev;
    ::ll::TypedStorage<1, 1, bool>                       mHadFirstPrepare;
    ::ll::TypedStorage<4, 16, ::Vec4>                    mRandom;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mParticleLifetime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mParticleAge;
    // NOLINTEND
};

} // namespace ParticleSystem
