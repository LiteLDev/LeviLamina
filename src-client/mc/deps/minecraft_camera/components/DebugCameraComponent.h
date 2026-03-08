#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/components/CameraComponent.h"

namespace MinecraftCamera {

struct DebugCameraComponent {
public:
    // DebugCameraComponent inner types define
    enum class InputMode : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 288, ::MinecraftCamera::CameraComponent>               mFrozenCamera;
    ::ll::TypedStorage<4, 4, ::MinecraftCamera::DebugCameraComponent::InputMode> mInputMode;
    ::ll::TypedStorage<1, 1, bool>                                               mDebugDrawGameCamera;
    // NOLINTEND
};

} // namespace MinecraftCamera
