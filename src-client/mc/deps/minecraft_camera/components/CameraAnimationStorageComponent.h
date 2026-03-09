#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/minecraft_camera/components/LayerType.h"

// auto generated forward declare list
// clang-format off
namespace CameraSplineUtils { struct Layer; }
namespace CameraSplineUtils { struct Spline3d; }
// clang-format on

namespace MinecraftCamera {

struct CameraAnimationStorageComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CameraSplineUtils::Spline3d>> mCurveOwner;
    ::ll::TypedStorage<
        8,
        32,
        ::Bedrock::DenseEnumMap<::MinecraftCamera::LayerType, ::std::shared_ptr<::CameraSplineUtils::Layer>, 2>>
                                    mLayers;
    ::ll::TypedStorage<4, 4, float> mDuration;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraAnimationStorageComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace MinecraftCamera
