#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraAttachToEntityComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk57a221;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAttachToEntityComponent& operator=(CameraAttachToEntityComponent const&);
    CameraAttachToEntityComponent(CameraAttachToEntityComponent const&);
    CameraAttachToEntityComponent();

};

}
