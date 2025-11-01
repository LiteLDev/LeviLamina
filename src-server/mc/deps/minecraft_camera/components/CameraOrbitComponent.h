#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraOrbitComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb2731a;
    ::ll::UntypedStorage<4, 4> mUnk48d827;
    ::ll::UntypedStorage<4, 4> mUnk18bf6d;
    ::ll::UntypedStorage<4, 4> mUnk65f731;
    ::ll::UntypedStorage<4, 4> mUnka2a0a2;
    ::ll::UntypedStorage<4, 4> mUnk28a0cb;
    ::ll::UntypedStorage<4, 4> mUnk290f66;
    ::ll::UntypedStorage<4, 4> mUnk35902e;
    ::ll::UntypedStorage<1, 1> mUnk910da2;
    ::ll::UntypedStorage<1, 1> mUnk624bf2;
    ::ll::UntypedStorage<4, 12> mUnke56b57;
    ::ll::UntypedStorage<4, 12> mUnk4d5d3e;
    ::ll::UntypedStorage<4, 4> mUnk2b6f4a;
    ::ll::UntypedStorage<4, 4> mUnk50f3a8;
    ::ll::UntypedStorage<4, 4> mUnka4b217;
    ::ll::UntypedStorage<4, 4> mUnk63480f;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraOrbitComponent& operator=(CameraOrbitComponent const&);
    CameraOrbitComponent(CameraOrbitComponent const&);
    CameraOrbitComponent();

};

}
