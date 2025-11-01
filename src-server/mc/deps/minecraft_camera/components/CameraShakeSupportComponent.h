#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraShakeSupportComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2bd727;
    ::ll::UntypedStorage<4, 4> mUnkecdbc7;
    ::ll::UntypedStorage<4, 4> mUnk761311;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraShakeSupportComponent& operator=(CameraShakeSupportComponent const&);
    CameraShakeSupportComponent(CameraShakeSupportComponent const&);
    CameraShakeSupportComponent();

};

}
