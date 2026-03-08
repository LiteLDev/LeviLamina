#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/minecraft_camera/components/LayerType.h"

// auto generated forward declare list
// clang-format off
namespace CameraSplineUtils { struct Layer; }
// clang-format on

namespace MinecraftCamera {

struct CameraAnimationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        32,
        ::Bedrock::DenseEnumMap<::MinecraftCamera::LayerType, ::std::shared_ptr<::CameraSplineUtils::Layer>, 2>>
                                                                                                     mLayers;
    ::ll::TypedStorage<4, 24, ::Bedrock::DenseEnumMap<::MinecraftCamera::LayerType, ::glm::vec3, 2>> mCache;
    ::ll::TypedStorage<4, 4, float>                                                                  mDuration;
    ::ll::TypedStorage<4, 4, float>                                                                  mCurrentTime;
    ::ll::TypedStorage<1, 1, bool>                                                                   mLoop;
    // NOLINTEND
};

} // namespace MinecraftCamera
