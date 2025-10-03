#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraDirectLookComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2606a4;
    ::ll::UntypedStorage<4, 4> mUnkc9954b;
    ::ll::UntypedStorage<4, 4> mUnk540679;
    ::ll::UntypedStorage<4, 4> mUnk80ae2e;
    ::ll::UntypedStorage<4, 4> mUnkc56ea8;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraDirectLookComponent& operator=(CameraDirectLookComponent const&);
    CameraDirectLookComponent(CameraDirectLookComponent const&);
    CameraDirectLookComponent();
};

} // namespace MinecraftCamera
