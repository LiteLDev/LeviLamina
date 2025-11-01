#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk6973eb;
    ::ll::UntypedStorage<4, 8>  mUnkd46d46;
    ::ll::UntypedStorage<4, 12> mUnk1dc3f9;
    ::ll::UntypedStorage<4, 12> mUnk1bf3ea;
    ::ll::UntypedStorage<4, 12> mUnk4fca17;
    ::ll::UntypedStorage<4, 12> mUnkb855ff;
    ::ll::UntypedStorage<4, 8>  mUnk1db759;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraOffsetComponent& operator=(CameraOffsetComponent const&);
    CameraOffsetComponent(CameraOffsetComponent const&);
    CameraOffsetComponent();
};

} // namespace MinecraftCamera
