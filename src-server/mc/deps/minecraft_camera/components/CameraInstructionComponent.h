#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraInstructionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkeec1a0;
    ::ll::UntypedStorage<4, 12> mUnk6a3c07;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraInstructionComponent& operator=(CameraInstructionComponent const&);
    CameraInstructionComponent(CameraInstructionComponent const&);
    CameraInstructionComponent();

};

}
