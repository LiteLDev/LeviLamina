#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/CameraShakeType.h"
#include "mc/entity/components/CameraShakeTypeQueue.h"

// auto generated forward declare list
// clang-format off
class Random;
class SimplexNoise;
class Vec3;
// clang-format on

class CameraShakeComponent {
public:
    // CameraShakeComponent inner types define
    using ShakeQueueArray = ::std::array<::CameraShakeTypeQueue, 2>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimplexNoise>>        xAxisNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimplexNoise>>        yAxisNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimplexNoise>>        zAxisNoise;
    ::ll::TypedStorage<8, 8, double>                                   mLastUpdatedTime;
    ::ll::TypedStorage<4, 4, float>                                    mNoiseTime;
    ::ll::TypedStorage<4, 4, float>                                    mDecayRate;
    ::ll::TypedStorage<8, 64, ::std::array<::CameraShakeTypeQueue, 2>> mShakeTypeQueues;
    ::ll::TypedStorage<1, 1, bool>                                     mWasShaking;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::std::vector<::CameraShakeType> getActiveShakeTypes() const;

    MCAPI ::Vec3
    getShakeVector(::CameraShakeType shakeType, float noiseMultiplier, float frequency, float amplitude) const;

    MCAPI void initialize(::Random& random);

    MCAPI bool queueShakeEvent(::CameraShakeType shakeType, float intensity, float duration);

    MCAPI ~CameraShakeComponent();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
