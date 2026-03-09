#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_camera/CameraFadeAnimation.h"

namespace MinecraftCamera {

struct CameraFadeEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>          mColor;
    ::ll::TypedStorage<8, 32, ::CameraFadeAnimation> mFadeAnimation;
    ::ll::TypedStorage<1, 1, bool>                   mPlayerWasSleeping;
    // NOLINTEND
};

} // namespace MinecraftCamera
