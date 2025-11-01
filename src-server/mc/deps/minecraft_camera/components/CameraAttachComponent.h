#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraAttachComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfd2434;
    ::ll::UntypedStorage<8, 48> mUnk486751;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAttachComponent& operator=(CameraAttachComponent const&);
    CameraAttachComponent(CameraAttachComponent const&);
    CameraAttachComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::MinecraftCamera::CameraAttachComponent& operator=(::MinecraftCamera::CameraAttachComponent&&);
    // NOLINTEND

};

}
