#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraGlobalInstructionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk337231;
    ::ll::UntypedStorage<4, 8> mUnkdbd510;
    ::ll::UntypedStorage<4, 4> mUnkdaa4a1;
    ::ll::UntypedStorage<4, 4> mUnkf1f110;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraGlobalInstructionComponent& operator=(CameraGlobalInstructionComponent const&);
    CameraGlobalInstructionComponent(CameraGlobalInstructionComponent const&);
    CameraGlobalInstructionComponent();
};

} // namespace MinecraftCamera
