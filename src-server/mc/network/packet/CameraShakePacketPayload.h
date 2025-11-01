#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/CameraShakeAction.h"
#include "mc/deps/minecraft_camera/CameraShakeType.h"

struct CameraShakePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mIntensity;
    ::ll::TypedStorage<4, 4, float> mSeconds;
    ::ll::TypedStorage<1, 1, ::CameraShakeType> mShakeType;
    ::ll::TypedStorage<1, 1, ::CameraShakeAction> mShakeAction;
    // NOLINTEND

};
