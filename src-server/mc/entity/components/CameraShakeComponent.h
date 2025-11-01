#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/CameraShakeType.h"

// auto generated forward declare list
// clang-format off
class SimplexNoise;
struct CameraShakeEvent;
// clang-format on

class CameraShakeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraShakeEvent>> mShakeEvents;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimplexNoise>> xAxisNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimplexNoise>> yAxisNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimplexNoise>> zAxisNoise;
    ::ll::TypedStorage<8, 8, double> mLastUpdatedTime;
    ::ll::TypedStorage<4, 4, float> mNoiseTime;
    ::ll::TypedStorage<4, 4, float> mShakeIntensity;
    ::ll::TypedStorage<4, 4, float> mDecayRate;
    ::ll::TypedStorage<1, 1, ::CameraShakeType> mShakeType;
    ::ll::TypedStorage<1, 1, bool> mWasShaking;
    // NOLINTEND

};
