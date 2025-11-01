#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraPresetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk16afb0;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPresetComponent& operator=(CameraPresetComponent const&);
    CameraPresetComponent(CameraPresetComponent const&);
    CameraPresetComponent();
};

} // namespace MinecraftCamera
