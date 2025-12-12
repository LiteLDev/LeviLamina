#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraTimeComponent {
public:
    // CameraTimeComponent inner types declare
    // clang-format off
    struct DeltaTime;
    struct ElapsedTime;
    // clang-format on

    // CameraTimeComponent inner types define
    struct DeltaTime {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkbfa4b0;
        ::ll::UntypedStorage<4, 8> mUnkef482d;
        // NOLINTEND

    public:
        // prevent constructor by default
        DeltaTime& operator=(DeltaTime const&);
        DeltaTime(DeltaTime const&);
        DeltaTime();
    };

    struct ElapsedTime {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk4cdc0e;
        // NOLINTEND

    public:
        // prevent constructor by default
        ElapsedTime& operator=(ElapsedTime const&);
        ElapsedTime(ElapsedTime const&);
        ElapsedTime();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2563c1;
    ::ll::UntypedStorage<4, 4> mUnkeddecf;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraTimeComponent& operator=(CameraTimeComponent const&);
    CameraTimeComponent(CameraTimeComponent const&);
    CameraTimeComponent();
};

} // namespace MinecraftCamera
