#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkf8e177;
    ::ll::UntypedStorage<4, 16> mUnkf4021d;
    ::ll::UntypedStorage<4, 12> mUnk26a2d8;
    ::ll::UntypedStorage<4, 4>  mUnkaf174f;
    ::ll::UntypedStorage<4, 4>  mUnk506048;
    ::ll::UntypedStorage<4, 4>  mUnk89eba8;
    ::ll::UntypedStorage<4, 4>  mUnk235890;
    ::ll::UntypedStorage<4, 64> mUnk14898c;
    ::ll::UntypedStorage<4, 64> mUnk918a1b;
    ::ll::UntypedStorage<4, 64> mUnkaff809;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraComponent& operator=(CameraComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C CameraComponent();

    MCNAPI CameraComponent(::MinecraftCamera::CameraComponent&&);

    MCNAPI CameraComponent(::MinecraftCamera::CameraComponent const&);

    MCNAPI ::MinecraftCamera::CameraComponent& operator=(::MinecraftCamera::CameraComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI void* $ctor(::MinecraftCamera::CameraComponent&&);

    MCNAPI void* $ctor(::MinecraftCamera::CameraComponent const&);
    // NOLINTEND
};

} // namespace MinecraftCamera
