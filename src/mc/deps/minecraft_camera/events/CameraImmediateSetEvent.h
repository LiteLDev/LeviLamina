#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/components/CameraInstructionComponent.h"

struct CameraImmediateSetEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                            mPresetIndex;
    ::ll::TypedStorage<4, 32, ::std::optional<::MinecraftCamera::CameraInstructionComponent>> mInstructionComponent;
    // NOLINTEND
};
